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

v8::Local<v8::Value> HtmlStrip(uint16_t* inBuf, size_t inBufSize, HtmlStripOptions opts, v8::Isolate* isolate);
v8::Local<v8::Value> HtmlEntitiesDecode(uint16_t* inBuf, size_t inBufSize, v8::Isolate* isolate);
v8::Local<v8::Value> AccentedCharsNormalize(uint16_t* inBuf, size_t inBufSize, v8::Isolate* isolate);
v8::Local<v8::Value> AccentedCharsStrip(uint16_t* inBuf, size_t inBufSize, v8::Isolate* isolate);

#if (NODE_MAJOR_VERSION >= 3)

static inline void GetBufferArrayData(v8::Local<v8::Object> val, uint16_t* &bufPointer){
    v8::Local<v8::Uint8Array> u8a = (val).As<v8::Uint8Array>();
    v8::ArrayBuffer::Contents u8a_c = u8a->Buffer()->GetContents();
    const size_t u8a_offset = u8a->ByteOffset();
    //const size_t u8a_length = u8a->ByteLength();
    bufPointer = reinterpret_cast<uint16_t*>( static_cast<char*>(u8a_c.Data()) + u8a_offset );
}

#else

static inline void GetBufferArrayData(v8::Local<v8::Object> val, uint16_t* &bufPointer){
  bufPointer = static_cast<uint16_t*>(
      val.As<v8::Object>()->GetIndexedPropertiesExternalArrayData());
}

#endif

#endif //HTMLSTRIP_HPP
