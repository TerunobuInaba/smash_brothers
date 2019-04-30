#ifndef PYXELCORE_UTILITIES_H_
#define PYXELCORE_UTILITIES_H_

#include <cstdint>

#define PRINT_ERROR(message) PrintError(message, __FUNCTION__)

namespace pyxelcore {

template <typename T>
T Min(T a, T b) {
  return a < b ? a : b;
}

template <typename T>
T Max(T a, T b) {
  return a > b ? a : b;
}

template <typename T>
T Abs(T v) {
  return v < 0 ? -v : v;
}

template <typename T>
T Clamp(T v, T low, T high) {
  return v < low ? low : (v > high ? high : v);
}

void PrintError(const char* message, const char* func_name);

int32_t GetConstantNumber(const char* name);
const char* GetConstantString(const char* name);

}  // namespace pyxelcore

#endif  // PYXELCORE_UTILITIES_H_