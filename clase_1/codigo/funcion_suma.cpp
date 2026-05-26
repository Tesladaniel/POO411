#include <iostream>

float suma(float num1, float num2) { return num1 + num2; }

int main() {
  float num1, num2;
  std::string op;

  std::cin >> num1 >> op >> num2;

  if (op == "+") {
    std::cout << num1 + num2;
    std::cout << suma(num1, num2);
  }
  return 0;
}
