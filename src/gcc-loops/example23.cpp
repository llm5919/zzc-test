#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <numeric>

#include "memory.h"
#include "macros.h"



unsigned short usa[N];
unsigned int   ua[N];

__attribute__((noinline))
void example23 (unsigned short *src, unsigned int *dst)
{
  int i;

  for (i = 0; i < 256; i++)
    *dst++ = *src++ << 7;
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;
  init_memory(&ua[0], &ua[N]);

  BENCH("Example23",  example23(usa,ua), Mi*8, digest_memory(&usa[0], &usa[256]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



