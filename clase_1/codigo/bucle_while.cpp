#include <iostream>

int main() {
  int contador = 0;

  std::cout << "Escribe tu valor, usa 0 para salir" << std::endl;
  std::cin >> contador;

  while (contador != 0) {
    std::cout << "Escribe tu valor, usa 0 para salir" << std::endl;
    std::cin >> contador;
  }

  return 0;
}
