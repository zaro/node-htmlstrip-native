#ifndef HTMLSTRIP_HPP
#define HTMLSTRIP_HPP
#include "v8.h"

v8::Handle<v8::Value> HtmlStrip(uint16_t* inBuf, size_t inBufSize, v8::Local<v8::Object> opts);
v8::Handle<v8::Value> HtmlEntitiesDecode(uint16_t* inBuf, size_t inBufSize);
v8::Handle<v8::Value> AccentedCharsNormalize(uint16_t* inBuf, size_t inBufSize);
v8::Handle<v8::Value> AccentedCharsStrip(uint16_t* inBuf, size_t inBufSize);

#endif //HTMLSTRIP_HPP
