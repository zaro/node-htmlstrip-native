#include "node_version.h"

// Cannot find any sensible way to make node-gyp to conditionally include file

#if (NODE_MAJOR_VERSION == 0) && (NODE_MINOR_VERSION < 12)

#include "htmlstrip_module_old.cpp"

#else

#include "htmlstrip_module_new.cpp"

#endif
