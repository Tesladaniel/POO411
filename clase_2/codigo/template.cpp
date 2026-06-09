#include <iostream>

template <class T> T suma(T a, T b) { return a + b; }

int main() {
  std::cout << suma(1, 5) << " " << suma(2.4, 6.1) << std::endl;

  return 0;
}
