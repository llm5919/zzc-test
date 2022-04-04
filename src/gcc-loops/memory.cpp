#include "memory.h"

void init_memory(void *start, void* end) {
  unsigned char state = 1;
  while (start != end) {
    state *= 7; state ^= 0x27; state += 1;
    *((unsigned char*)start) = state;
    start = ((char*)start) + 1;
  }
}

void init_memory_float(float *start, float* end) {
  float state = 1.0;
  while (start != end) {
    state *= 1.1;
    *start = state;
    start++;
  }
}

unsigned digest_memory(void *start, void* end) {
  unsigned state = 1;
  while (start != end) {
    state *= 3;
    state ^= *((unsigned char*)start);
    state = (state >> 8  ^ state << 8);
    start = ((char*)start) + 1;
  }
  return state;
}

