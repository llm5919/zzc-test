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
int a[N*2] ALIGNED16;
int b[N*2] ALIGNED16;
int c[N*2] ALIGNED16;

typedef int aint __attribute__ ((__aligned__(16)));

__attribute__((noinline))
void example4a (int n, aint * __restrict__ p, aint * __restrict__ q) {
   /* feature: support for (aligned) pointer accesses  */
   /* feature: support for constants  */
   while (n--){
      *p++ = *q++ + 5;
   }
}

__attribute__((noinline))
void example4b (int n, aint * __restrict__ p, aint * __restrict__ q) {
   int i;

   /* feature: support for read accesses with a compile time known misalignment  */
   for (i=0; i<n; i++){
      a[i] = b[i+1] + c[i+3];
   }
}

__attribute__((noinline))
void example4c (int n, aint * __restrict__ p, aint * __restrict__ q) {
   int i;
    const int MAX = 4;
   /* feature: support for if-conversion  */
   for (i=0; i<n; i++){
      int j = a[i];
      b[i] = (j > MAX ? MAX : 0);
   }
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;
  unsigned dummy = 0;

  init_memory(&ia[0], &ia[N]);
  init_memory(&ib[0], &ib[N]);
  init_memory(&a[0], &a[N*2]);
  init_memory(&b[0], &b[N*2]);
  init_memory(&c[0], &c[N*2]);

  BENCH("Example4a",  example4a(N, ia, ib), Mi*2, digest_memory(&ia[0], &ia[N]));
  BENCH("Example4b",  example4b(N-10, ia, ib), Mi*2, digest_memory(&ia[0], &ia[N]));
  BENCH("Example4c",  example4c(N, ia, ib), Mi*2, digest_memory(&ib[0], &ib[N]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



