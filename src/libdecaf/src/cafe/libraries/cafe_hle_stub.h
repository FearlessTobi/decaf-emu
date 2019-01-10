#pragma once

#ifdef _MSC_VER
#define PRETTY_FUNCTION_NAME __FUNCSIG__
#else
#define PRETTY_FUNCTION_NAME __PRETTY_FUNCTION__
#endif

#define decaf_warn_stub() \
   { \
      static bool warned = false; \
      if (!warned) { \
         warnStubInvoked(PRETTY_FUNCTION_NAME); \
         warned = true; \
      } \
   }

void
warnStubInvoked(const char *name);