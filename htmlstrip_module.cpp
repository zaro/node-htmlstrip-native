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
      FunctionTemplate::New(HtmlStrip)->GetFunction());

  target->Set(String::NewSymbol("html_entities_decode"),
      FunctionTemplate::New(HtmlEntitiesDecode)->GetFunction());

  target->Set(String::NewSymbol("accented_chars_norm"),
      FunctionTemplate::New(AccentedCharsNormalize)->GetFunction());

  target->Set(String::NewSymbol("accented_chars_strip"),
      FunctionTemplate::New(AccentedCharsStrip)->GetFunction());
}


NODE_MODULE(htmlstrip, RegisterModule);
