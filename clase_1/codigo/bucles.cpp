#include <iostream>

int main() {
  std::string nombre;
  do {

    std::cout << "Escribe tu nombre o salir" << std::endl;

    std::cin >> nombre;

  } while (nombre != "salir");

  return 0;
}
