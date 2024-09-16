#include "common.h"

#if HEDLEY_GCC_HAS_WARNING("-Wattribute-warning",9,0,0)
#  pragma clang diagnostic warning "-Wattribute-warning"
#endif

HEDLEY_UNAVAILABLE(3.14)
static void
test_unavailable(void) { }

int main(void) {
  test_unavailable();

  return 0;
}
