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
void example2a (int n, int x) {
   int i;

   /* feature: support for unknown loop bound  */
   /* feature: support for loop invariants  */
   for (i=0; i<n; i++) {
      b[i] = x;
   }
}

__attribute__((noinline))
void example2b (int n, int x) {
  int i = 0;
   /* feature: general loop exit condition  */
   /* feature: support for bitwise operations  */
   while (n--){
      a[i] = b[i]&c[i]; i++;
   }
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;

  init_memory(&a[0], &a[N*2]);
  init_memory(&b[0], &b[N*2]);
  init_memory(&c[0], &c[N*2]);

  BENCH("Example2a",  example2a(N, 2), Mi*4, digest_memory(&b[0], &b[N]));
  BENCH("Example2b",  example2b(N, 2), Mi*2, digest_memory(&a[0], &a[N]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



