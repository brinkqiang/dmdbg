#include "dmdbg.h"
#include <cstdint>
#include <vector>
#include <map>
// You can use "dbg(..)" in expressions:
int32_t factorial(int32_t n) {
  if (dbg(n <= 1)) {
    return dbg(1);
  } else {
    return dbg(n * factorial(n - 1));
  }
}

int main() {
  std::string message = "hello";
  dbg(message);  // [example.cpp:15 (main)] message = "hello" (std::string)

  const int32_t a = 2;
  const int32_t b = dbg(3 * a) + 1;  // [example.cpp:18 (main)] 3 * a = 6 (int32_t)

  std::vector<int32_t> numbers{b, 13, 42};
  dbg(numbers);  // [example.cpp:21 (main)] numbers = {7, 13, 42} (std::vector<int32_t>)

  dbg("this line is executed");  // [example.cpp:23 (main)] this line is executed

  factorial(4);

  std::map<int32_t, int32_t> map{{1, 2}, {3, 4}};

  dbg(map);  // [example.cpp:28 (main)] map = {{1, 2}, {3, 4}} (std::map<int32_t, int32_t>)
  return 0;
}
