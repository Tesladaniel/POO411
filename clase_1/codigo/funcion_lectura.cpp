#include <iostream>

int Leer_impar_mayor_a(int base = 0) {
  int num1;

  do {
    std::cout << "Ingresa un numero mayor a 0 e impar" << std::endl;
    std::cin >> num1;

  } while (num1 <= base || num1 % 2 == 0);
  return num1;
}

int main() {
  int num1;
  num1 = Leer_impar_mayor_a();
  std::cout << "El numero leido es " << num1 << std::endl;
  return 0;
}
