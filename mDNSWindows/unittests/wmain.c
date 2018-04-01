#include "unittest.h"

#include "vld.h"

mDNS mDNSStorage;

#ifdef UNIT_TEST
// Run the unit test main
UNITTEST_MAIN
#endif

#ifdef UNIT_TEST
#include "../unittests/daemon_ut.c"
#endif // UNIT_TEST