#include "common.h"

#include <stdlib.h>

HEDLEY_ALLOC_SIZE(1)
static void*
myalloc (size_t buffer_size) {
  return malloc(buffer_size);
}

int main(void) {
  void* buf = myalloc(42);
  if (buf != NULL) {
    free(buf);
  }

  return 0;
}
