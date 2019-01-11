#include "cafe_hle_stub.h"

#include <common/log.h>

void
warnStubInvoked(const char *name)
{
   gLog->warn("Application invoked stubbed function `{}`", name);
}