#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <numeric>

#include "memory.h"
#include "macros.h"

float da[N], db[N], dc[N], dd[N];
int dj[N];

__attribute__((noinline))
void example25 (void)
{
  int i;
  char x, y;
  for (i = 0; i < N; i++)
    {
      x = (da[i] < db[i]);
      y = (dc[i] < dd[i]);
      dj[i] = x & y;
    }
}

int main(int argc,char* argv[]){

  bool print_times = argc > 1;

  std::vector<unsigned> results;

  init_memory_float(&da[0], &da[N]);
  init_memory_float(&db[0], &db[N]);
  init_memory_float(&dc[0], &dc[N]);
  init_memory_float(&dd[0], &dd[N]);

  BENCH("Example25",  example25(), Mi*2, digest_memory(&dj[0], &dj[N]));

  std::cout<<std::hex;
  std::cout<<"Results: ("<<std::accumulate(results.begin(), results.end(), 0)<<"):";
  for (unsigned i=0; i < results.size(); ++i) {
    std::cout<<" "<<results[i];
  }
  std::cout<<"\n";

  return 0;
}



