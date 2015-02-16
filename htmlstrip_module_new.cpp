#include <node.h>
#include "v8.h"

#include "htmlstrip.hpp"

using namespace v8;

Persistent<Value> chars_written_sym;
Persistent<Value> include_script_sym;
Persistent<Value> include_style_sym;
Persistent<Value> compact_whitespace_sym;
Persistent<Value> include_attributes_sym;

Persistent<Value> taghints_sym;
Persistent<Value> taghints_pos_sym;
Persistent<Value> taghints_type_sym;
Persistent<Value> taghints_type_script_sym;
Persistent<Value> taghints_type_style_sym;
Persistent<Value> taghints_type_any_sym;
Persistent<Value> taghints_type_attribute_sym;
Persistent<Value> taghints_type_end_sym;

#define PERSISTENT(x) Local<Value>::New(isolate, x)

void HtmlStripFunc(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  HandleScope scope(isolate);

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
    Local<Object> optsObj = args[2].As<Object>();
    if(!optsObj.IsEmpty()){

      if(optsObj->Has(PERSISTENT(include_script_sym))){
        opts.include_script = optsObj->Get(PERSISTENT(include_script_sym))->ToBoolean()->Value();
      }

      if(optsObj->Has(PERSISTENT(include_style_sym))){
        opts.include_style = optsObj->Get(PERSISTENT(include_style_sym))->ToBoolean()->Value();
      }

      if(optsObj->Has(PERSISTENT(compact_whitespace_sym))){
        opts.compact_whitespace = optsObj->Get(PERSISTENT(compact_whitespace_sym))->ToBoolean()->Value();
      }

      if(optsObj->Has(PERSISTENT(include_attributes_sym))){
        opts.include_attributes = true;
        opts.includeAttributesMap = optsObj->Get(PERSISTENT(include_attributes_sym))->ToObject();
        Local< String > allAttr = String::NewFromUtf8(isolate, "*");
        opts.include_all_attributes = opts.includeAttributesMap->Has(allAttr);
      }
    }
  }

  args.GetReturnValue().Set( HtmlStrip(inBuf, inBufSize, opts, isolate) );
}

void HtmlEntitiesDecodeFunc(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  HandleScope scope(isolate);

    uint16_t* inBuf = NULL;
    size_t inBufSize = 0;
    if (args.Length() >= 2) {
      inBuf = static_cast<uint16_t*>(  // NULL on flush.
          args[0].As<Object>()->GetIndexedPropertiesExternalArrayData());
      inBufSize = args[1]->Uint32Value();
    }

    args.GetReturnValue().Set( HtmlEntitiesDecode(inBuf, inBufSize, isolate) );
}

void AccentedCharsNormalizeFunc(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  HandleScope scope(isolate);

    uint16_t* inBuf = NULL;
    size_t inBufSize = 0;
    if (args.Length() >= 2) {
      inBuf = static_cast<uint16_t*>(  // NULL on flush.
          args[0].As<Object>()->GetIndexedPropertiesExternalArrayData());
      inBufSize = args[1]->Uint32Value();
    }

    args.GetReturnValue().Set( AccentedCharsNormalize(inBuf, inBufSize, isolate) );
}

void AccentedCharsStripFunc(const FunctionCallbackInfo<Value>& args) {
    Isolate* isolate = args.GetIsolate();
    HandleScope scope(isolate);

    uint16_t* inBuf = NULL;
    size_t inBufSize = 0;
    if (args.Length() >= 2) {
      inBuf = static_cast<uint16_t*>(  // NULL on flush.
          args[0].As<Object>()->GetIndexedPropertiesExternalArrayData());
      inBufSize = args[1]->Uint32Value();
    }

    args.GetReturnValue().Set( AccentedCharsStrip(inBuf, inBufSize, isolate) );
}


#define INIT_PERSISTENT(p,x) p.Reset(isolate, String::NewFromUtf8(isolate, x))
void RegisterModule(Handle<Object> target) {

  v8::Isolate* isolate = v8::Isolate::GetCurrent();

  INIT_PERSISTENT(chars_written_sym ,"_charsWritten");
  INIT_PERSISTENT(include_script_sym ,"include_script");
  INIT_PERSISTENT(include_style_sym ,"include_style");
  INIT_PERSISTENT(compact_whitespace_sym ,"compact_whitespace");
  INIT_PERSISTENT(include_attributes_sym ,"include_attributes");
  INIT_PERSISTENT(taghints_sym ,"tag_hints");
  INIT_PERSISTENT(taghints_pos_sym ,"pos");
  INIT_PERSISTENT(taghints_type_sym ,"type");
  INIT_PERSISTENT(taghints_type_script_sym ,"script");
  INIT_PERSISTENT(taghints_type_style_sym ,"style");
  INIT_PERSISTENT(taghints_type_any_sym ,"any");
  INIT_PERSISTENT(taghints_type_attribute_sym ,"attribute");
  INIT_PERSISTENT(taghints_type_end_sym ,"end");

  target->Set(String::NewFromUtf8(isolate, "html_strip", v8::String::kInternalizedString),
      FunctionTemplate::New(isolate, HtmlStripFunc)->GetFunction());

  target->Set(String::NewFromUtf8(isolate, "html_entities_decode", v8::String::kInternalizedString),
      FunctionTemplate::New(isolate, HtmlEntitiesDecodeFunc)->GetFunction());

  target->Set(String::NewFromUtf8(isolate, "accented_chars_norm", v8::String::kInternalizedString),
      FunctionTemplate::New(isolate, AccentedCharsNormalizeFunc)->GetFunction());

  target->Set(String::NewFromUtf8(isolate, "accented_chars_strip", v8::String::kInternalizedString),
      FunctionTemplate::New(isolate, AccentedCharsStripFunc)->GetFunction());
}


NODE_MODULE(htmlstrip, RegisterModule);
