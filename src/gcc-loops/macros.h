#ifndef __SUITE_MACROS__
#define __SUITE_MACROS__

#define N 1024
#define M 32
#define K 4
#define ALIGNED16 __attribute__((aligned(16)))

// unsigned short usa[N];
// short sa[N];
// short sb[N];
// short sc[N];
// unsigned int   ua[N];
// int   ia[N] ALIGNED16;
// int   ib[N] ALIGNED16;
// int   ic[N] ALIGNED16;
// unsigned int ub[N];
// unsigned int uc[N];
// float fa[N], fb[N];
// float da[N], db[N], dc[N], dd[N];
// int dj[N];

// struct A {
//   int ca[N];
// } s;

// int a[N*2] ALIGNED16;
// int b[N*2] ALIGNED16;
// int c[N*2] ALIGNED16;
// int d[N*2] ALIGNED16;

class Timer {

public:
  Timer(const char* title, bool print) {
    Title = title;
    Print = print;
    gettimeofday(&Start, 0);
  }

  ~Timer() {
    gettimeofday(&End, 0);
    long mtime, s,us;
    s = End.tv_sec  - Start.tv_sec;
    us = End.tv_usec - Start.tv_usec;
    mtime = (s*1000 + us/1000.0)+0.5;
    if (Print)
      std::cout<<Title<<", "<<mtime<<", msec\n";
  }

private:
  const char* Title;
  bool Print;
  struct timeval Start, End;
};


// Warmup and then measure.
#define BENCH(NAME, RUN_LINE, ITER, DIGEST_LINE) {\
  RUN_LINE;\
  Timer atimer(NAME, print_times);\
  for (int i=0; i < (ITER); ++i) RUN_LINE;\
  unsigned r = DIGEST_LINE;\
  results.push_back(r);\
 }
 

// #ifdef SMALL_PROBLEM_SIZE
//   const int Mi = 1<<10;
// #else
//   const int Mi = 1<<18;
// #endif
const int Mi = 1<<14;

#endif


