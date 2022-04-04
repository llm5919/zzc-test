#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <numeric>

#include "memory.h"
#include "macros.h"

short sa[N];
short sb[N];
short sc[N];
int   ia[N] ALIGNED16;
int   ib[N] ALIGNED16;
int   ic[N] ALIGNED16;

__attribute__((noinline))
void example10b(short *__restrict__ sa, short *__restrict__ sb, short *__restrict__ sc, int* __restrict__ ia, int* __restrict__ ib, int* __restrict__ ic) {
  int i;
  for (i = 0; i < N; i++) {
    ia[i] = (int) sb[i];
  }
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;
  unsigned dummy = 0;

  init_memory(&ia[0], &ia[N]);
  init_memory(&ib[0], &ib[N]);
  init_memory(&ic[0], &ic[N]);
  init_memory(&sa[0], &sa[N]);
  init_memory(&sb[0], &sb[N]);
  init_memory(&sc[0], &sc[N]);

  BENCH("Example10b", example10b(sa,sb,sc,ia,ib,ic), Mi*4, digest_memory(&ia[0], &ia[N]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



