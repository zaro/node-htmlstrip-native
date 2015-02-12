#ifndef HTMLSTRIP_HPP
#define HTMLSTRIP_HPP
#include "v8.h"

v8::Handle<v8::Value> HtmlStrip(const v8::Arguments& args);
v8::Handle<v8::Value> HtmlEntitiesDecode(const v8::Arguments& args);
v8::Handle<v8::Value> AccentedCharsNormalize(const v8::Arguments& args);
v8::Handle<v8::Value> AccentedCharsStrip(const v8::Arguments& args);

#endif //HTMLSTRIP_HPP
