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
void LoopFunc3(Ty *A, Ty *B, Ty *C, unsigned TC){
  _Pragma("clang loop vectorize(enable)")
  for (unsigned i = 0; i < TC; i++) {
    auto X = C[i] + 10;
    A[i] = X;
    B[i] = X + 9;
  }
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
  std::unique_ptr<Ty[]> Input2(new Ty[NumArrayElements]);

  auto CheckWithOffsetSecond = [&](int Offset) {
    init_data(Input1, NumArrayElements);
    init_data(Input2, NumArrayElements);

    // Run vector function to generate output to check.
    Ty *StartPtr = &Input1[NumArrayElements / 2];
    LoopFunc3(StartPtr + Offset, &Input2[0], StartPtr, N);
  };

  for (int i = -100; i <= 100; i++)
    CheckWithOffsetSecond(i);
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
