#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <numeric>

#include "memory.h"
#include "macros.h"


int a[N*2] ALIGNED16;

__attribute__((noinline))
void example12() {
  for (int i = 0; i < N; i++) {
    a[i] = i;
  }
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;

  init_memory(&a[0], &a[N*2]);

  BENCH("Example12",  example12(), Mi*4, digest_memory(&a[0], &a[N]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



