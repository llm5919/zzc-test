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
int b[N*2] ALIGNED16;
int c[N*2] ALIGNED16;

__attribute__((noinline))
void example1 () {
  int i;

  for (i=0; i<256; i++){
    a[i] = b[i] + c[i];
  }
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;

  init_memory(&a[0], &a[N*2]);
  init_memory(&b[0], &b[N*2]);
  init_memory(&c[0], &c[N*2]);

  BENCH("Example1",   example1(), Mi*10, digest_memory(&a[0], &a[256]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



