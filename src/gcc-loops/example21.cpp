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
int a[N*2] ALIGNED16;

__attribute__((noinline))
void example21(int *b, int n) {
  int i, a = 0;

  for (i = n-1; i >= 0; i--)
    a += b[i];

  b[0] = a;
}


int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;

  init_memory(&ia[0], &ia[N]);
  init_memory(&a[0], &a[N*2]);

  //BENCH("Example21",  example21(ia, N), Mi*4, digest_memory(&ia[0], &ia[N]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



