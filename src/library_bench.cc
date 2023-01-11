#include <benchmark/benchmark.h>

#include "library.h"

namespace cpp {

static void BM_Subtract(benchmark::State &state) {

  for (auto _ : state) {
    auto x = subtract(2, 1);
    benchmark::DoNotOptimize(x);
  }
}
BENCHMARK(BM_Subtract);

} // namespace cpp