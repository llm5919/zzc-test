#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <numeric>

#include "memory.h"
#include "macros.h"

int b[N*2] ALIGNED16;

__attribute__((noinline))
void example2a (int n, int x) {
   int i;

   /* feature: support for unknown loop bound  */
   /* feature: support for loop invariants  */
   for (i=0; i<n; i++) {
      b[i] = x;
   }
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;
  std::vector<unsigned> results;

  init_memory(&b[0], &b[N*2]);

  BENCH("Example2a",  example2a(N, 2), Mi*4, digest_memory(&b[0], &b[N]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



