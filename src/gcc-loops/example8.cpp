#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <numeric>

#include "memory.h"
#include "macros.h"

int G[M][N];
__attribute__((noinline))
void example8 (int x) {
   int i,j;

   /* feature: support for multidimensional arrays  */
   for (i=0; i<M; i++) {
     for (j=0; j<N; j++) {
       G[i][j] = x;
     }
   }
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;

  init_memory(&G[0][0], &G[0][N]);

  BENCH("Example8",   example8(8), Mi/4, digest_memory(&G[0][0], &G[0][N]));
  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



