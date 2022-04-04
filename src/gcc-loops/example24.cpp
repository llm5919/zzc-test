#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <numeric>

#include "memory.h"
#include "macros.h"

int   ic[N] ALIGNED16;
float fa[N], fb[N];

__attribute__((noinline))
void example24 (short x, short y)
{
  int i;
  for (i = 0; i < N; i++)
    ic[i] = fa[i] < fb[i] ? x : y;
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;
  // unsigned dummy = 0;

  init_memory(&ic[0], &ic[N]);
  init_memory_float(&fa[0], &fa[N]);
  init_memory_float(&fb[0], &fb[N]);

  BENCH("Example24",  example24(2,4), Mi*2, 0);

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



