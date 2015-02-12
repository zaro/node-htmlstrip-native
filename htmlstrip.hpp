#ifndef HTMLSTRIP_HPP
#define HTMLSTRIP_HPP
#include "v8.h"

struct HtmlStripOptions {
  bool include_script;
  bool include_style;
  bool compact_whitespace;
  bool include_attributes;
  bool include_all_attributes;
  v8::Local<v8::Object> includeAttributesMap;
  HtmlStripOptions() {
    include_script = true;
    include_style = true;
    compact_whitespace = false;
    include_attributes = false;
    include_all_attributes = false;
  }
};

v8::Handle<v8::Value> HtmlStrip(uint16_t* inBuf, size_t inBufSize, HtmlStripOptions opts);
v8::Handle<v8::Value> HtmlEntitiesDecode(uint16_t* inBuf, size_t inBufSize);
v8::Handle<v8::Value> AccentedCharsNormalize(uint16_t* inBuf, size_t inBufSize);
v8::Handle<v8::Value> AccentedCharsStrip(uint16_t* inBuf, size_t inBufSize);

#endif //HTMLSTRIP_HPP
