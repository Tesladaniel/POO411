#include <iostream>

int main() {
  std::string cadena;
  float num1, num2, resultado;
  num1 = num2 = resultado = 0;
  std::cin >> num1 >> cadena >> num2;

  if (cadena == "+") {
    resultado = num1 + num2;
  } else if (cadena == "-") {
    resultado = num1 - num2;
  }

  std::cout << num1 << cadena << num2 << std::endl << resultado;
  return 0;
}
