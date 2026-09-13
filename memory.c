#include "memory.h"
#include <stdlib.h>
void *reallocate(void *pointer, size_t oldSize, size_t newSize) {
  // if newSize is zero then we will free allocation otherwise we will just
  // allocate using realloc with the size of the newSize
  if (newSize == 0) {
    free(pointer);
    return NULL;
  }

  void *result = realloc(pointer, newSize);
  if (result == NULL) {
    exit(1);
  }
  return result;
}
