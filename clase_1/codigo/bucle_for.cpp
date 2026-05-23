#include <iostream>

int main() {
  int arreglo[100];
  int resultado = 0;

  for (int i = 0; i < 100; i++)
    arreglo[i] = i + 1;

  for (int i = 0; i < 100; i++)
    resultado += arreglo[i];

  std::cout << resultado;

  // for (int i = 0; i < 100; i++) {
  //
  //   std::cout << "Iteración: " << i << std::endl;
  // }
  return 0;
}
