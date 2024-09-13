#include "../hedley.h"

#if HEDLEY_HAS_WARNING("-Wc++11-extra-semi")
#  pragma clang diagnostic warning "-Wc++11-extra-semi"
#elif HEDLEY_HAS_WARNING("-Wextra-semi")
#  pragma clang diagnostic warning "-Wextra-semi"
#elif HEDLEY_IAR_VERSION_CHECK(8,0,0)
#  pragma diag_suppress=Pe381
#elif defined(HEDLEY_SUNPRO_VERSION) && !defined(__cplusplus)
#  pragma error_messages(off,E_EMPTY_DECLARATION)
#elif defined(HEDLEY_TI_VERSION)
#  pragma diag_suppress 383
#endif

#ifdef __cplusplus
struct Empty2 {};
struct Empty3 {};
struct HEDLEY_EMPTY_BASES Derived3 : public Empty2, public Empty3
{
  public:
    char c;
};
#if !defined(HEDLEY_MSVC_VERSION) || HEDLEY_MSVC_VERSION_CHECK(19,0,23918)
HEDLEY_STATIC_ASSERT(sizeof(Derived3) == sizeof(Empty2), "empty base optimization failed");
#endif
#endif /* __cplusplus */

int main(void) {
  return 0;
}
