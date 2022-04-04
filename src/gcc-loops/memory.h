#include <sys/time.h>
#ifndef __SUITE_MEMORY__
#define __SUITE_MEMORY__

void init_memory(void *start, void* end);

void init_memory_float(float *start, float* end);

unsigned digest_memory(void *start, void* end);

#endif

