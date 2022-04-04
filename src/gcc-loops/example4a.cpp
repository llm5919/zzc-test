#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <numeric>

#include "memory.h"
#include "macros.h"

int   ia[N] ALIGNED16;
int   ib[N] ALIGNED16;

typedef int aint __attribute__ ((__aligned__(16)));

__attribute__((noinline))
void example4a (int n, aint * __restrict__ p, aint * __restrict__ q) {
   /* feature: support for (aligned) pointer accesses  */
   /* feature: support for constants  */
   while (n--){
      *p++ = *q++ + 5;
   }
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;
  unsigned dummy = 0;

  init_memory(&ia[0], &ia[N]);
  init_memory(&ib[0], &ib[N]);

  BENCH("Example4a",  example4a(N, ia, ib), Mi*2, digest_memory(&ia[0], &ia[N]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



