#include "cafe_ppc_interface_invoke_trace.h"
#include <common/log.h>

namespace cafe
{

namespace detail
{

// We moved this function out to its own file to avoid including spdlog
// throughout the entire codebase even if its not directly used.
void
logTraceEntry(const std::string_view& entry)
{
   gLog->debug(entry);
}

} // namespace detail

} // namespace cafe
