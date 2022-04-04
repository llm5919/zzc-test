#include <functional>
#include <iostream>
#include <limits>
#include <memory>
#include <random>
#include <stdint.h>
#include<chrono>

static std::mt19937 rng;

// Initialize arrays A with random numbers.
template <typename Ty>
static void init_data(const std::unique_ptr<Ty[]> &A, unsigned N) {
  std::uniform_int_distribution<uint64_t> distrib(std::numeric_limits<Ty>::min(),
                                            std::numeric_limits<Ty>::max());
  for (unsigned i = 0; i < N; i++)
    A[i] = distrib(rng);
}


template <typename Ty>
void LoopFunc2(Ty *A, Ty *B, unsigned TC){
  _Pragma("clang loop vectorize(enable)")
  _Pragma("clang loop unroll(disable)")
  for (unsigned i = 0; i < TC; i += 2)
    A[i] = B[i] + 10;
}

// Run both \p ScalarFn and \p VectorFn on the same inputs with pointers to the
// same buffer. Fail if they do not produce the same results.
template <typename Ty>
void checkOverlappingMemoryOneRuntimeCheck(const char *Name) {
  std::cout << "Checking " << Name << "\n";

  unsigned N = 100;
  // Make sure we have enough extra elements so we can be liberal with offsets.
  unsigned NumArrayElements = N * 8;
  std::unique_ptr<Ty[]> Input1(new Ty[NumArrayElements]);

  auto CheckWithOffset = [&](int Offset) {
    init_data(Input1, NumArrayElements);
    Ty *StartPtr = &Input1[NumArrayElements / 2];
    LoopFunc2(StartPtr + Offset, StartPtr, N);
  };

  for (int i = -100; i <= 100; i++)
    CheckWithOffset(i);
}

int main(void) {
  rng = std::mt19937(15);

  checkOverlappingMemoryOneRuntimeCheck<uint8_t>(
                      "1 read, 1 write, step 1, uint8_t");
  checkOverlappingMemoryOneRuntimeCheck<uint32_t>(
                      "1 read, 1 write, step 1, uint32_t");
  checkOverlappingMemoryOneRuntimeCheck<uint64_t>(
                       "1 read, 1 write, step 1, uint64_t");
  

  return 0;
}
