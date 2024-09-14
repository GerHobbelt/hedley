#include "../hedley.h"

HEDLEY_DIAGNOSTIC_DISABLE_EXTRA_SEMI

HEDLEY_STATIC_ASSERT(sizeof(char) == 1, "char must be one byte");

int main(void) {
  return 0;
}
