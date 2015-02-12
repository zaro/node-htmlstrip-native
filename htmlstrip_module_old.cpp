#include <node.h>
#include "v8.h"

#include "htmlstrip.hpp"

using namespace v8;

Persistent<String> chars_written_sym;
Persistent<String> include_script_sym;
Persistent<String> include_style_sym;
Persistent<String> compact_whitespace_sym;
Persistent<String> include_attributes_sym;

Persistent<String> taghints_sym;
Persistent<String> taghints_pos_sym;
Persistent<String> taghints_type_sym;
Persistent<String> taghints_type_script_sym;
Persistent<String> taghints_type_style_sym;
Persistent<String> taghints_type_any_sym;
Persistent<String> taghints_type_attribute_sym;
Persistent<String> taghints_type_end_sym;

void initOptions(Local<Object> optsObj, HtmlStripOptions& opts) {
  if(!optsObj.IsEmpty()){

    if(optsObj->Has(include_script_sym)){
      opts.include_script = optsObj->Get(include_script_sym)->ToBoolean()->Value();
    }

    if(optsObj->Has(include_style_sym)){
      opts.include_style = optsObj->Get(include_style_sym)->ToBoolean()->Value();
    }

    if(optsObj->Has(compact_whitespace_sym)){
      opts.compact_whitespace = optsObj->Get(compact_whitespace_sym)->ToBoolean()->Value();
    }

    if(optsObj->Has(include_attributes_sym)){
      opts.include_attributes = true;
      opts.includeAttributesMap = optsObj->Get(include_attributes_sym)->ToObject();
      Local< String > allAttr = String::New("*");
      opts.include_all_attributes = opts.includeAttributesMap->Has(allAttr);
    }
  }

}

Handle<Value> HtmlStripFunc(const Arguments& args) {
    HandleScope scope;

    uint16_t* inBuf = NULL;
    size_t inBufSize = 0;
    if (args.Length() >= 2) {
      inBuf = static_cast<uint16_t*>(  // NULL on flush.
          args[0].As<Object>()->GetIndexedPropertiesExternalArrayData());
      inBufSize = args[1]->Uint32Value();
    }

    HtmlStripOptions opts;
    // Check if we have any options passed
    if(args.Length() >= 3){
      initOptions( args[2].As<Object>(), opts );
    }

    return scope.Close( HtmlStrip(inBuf, inBufSize, opts) );
}

Handle<Value> HtmlEntitiesDecodeFunc(const Arguments& args) {
    HandleScope scope;

    uint16_t* inBuf = NULL;
    size_t inBufSize = 0;
    if (args.Length() >= 2) {
      inBuf = static_cast<uint16_t*>(  // NULL on flush.
          args[0].As<Object>()->GetIndexedPropertiesExternalArrayData());
      inBufSize = args[1]->Uint32Value();
    }

    return scope.Close( HtmlEntitiesDecode(inBuf, inBufSize) );
}

Handle<Value> AccentedCharsNormalizeFunc(const Arguments& args) {
    HandleScope scope;

    uint16_t* inBuf = NULL;
    size_t inBufSize = 0;
    if (args.Length() >= 2) {
      inBuf = static_cast<uint16_t*>(  // NULL on flush.
          args[0].As<Object>()->GetIndexedPropertiesExternalArrayData());
      inBufSize = args[1]->Uint32Value();
    }

    return scope.Close( AccentedCharsNormalize(inBuf, inBufSize) );
}

Handle<Value> AccentedCharsStripFunc(const Arguments& args) {
    HandleScope scope;

    uint16_t* inBuf = NULL;
    size_t inBufSize = 0;
    if (args.Length() >= 2) {
      inBuf = static_cast<uint16_t*>(  // NULL on flush.
          args[0].As<Object>()->GetIndexedPropertiesExternalArrayData());
      inBufSize = args[1]->Uint32Value();
    }

    return scope.Close( AccentedCharsStrip(inBuf, inBufSize) );
}

void RegisterModule(Handle<Object> target) {
  chars_written_sym = NODE_PSYMBOL("_charsWritten");
  include_script_sym = NODE_PSYMBOL("include_script");
  include_style_sym = NODE_PSYMBOL("include_style");
  compact_whitespace_sym = NODE_PSYMBOL("compact_whitespace");
  include_attributes_sym = NODE_PSYMBOL("include_attributes");
  taghints_sym = NODE_PSYMBOL("tag_hints");
  taghints_pos_sym = NODE_PSYMBOL("pos");
  taghints_type_sym = NODE_PSYMBOL("type");
  taghints_type_script_sym = NODE_PSYMBOL("script");
  taghints_type_style_sym = NODE_PSYMBOL("style");
  taghints_type_any_sym = NODE_PSYMBOL("any");
  taghints_type_attribute_sym = NODE_PSYMBOL("attribute");
  taghints_type_end_sym = NODE_PSYMBOL("end");

  target->Set(String::NewSymbol("html_strip"),
      FunctionTemplate::New(HtmlStripFunc)->GetFunction());

  target->Set(String::NewSymbol("html_entities_decode"),
      FunctionTemplate::New(HtmlEntitiesDecodeFunc)->GetFunction());

  target->Set(String::NewSymbol("accented_chars_norm"),
      FunctionTemplate::New(AccentedCharsNormalizeFunc)->GetFunction());

  target->Set(String::NewSymbol("accented_chars_strip"),
      FunctionTemplate::New(AccentedCharsStripFunc)->GetFunction());
}


NODE_MODULE(htmlstrip, RegisterModule);
