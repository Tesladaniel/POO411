#include <iostream>

int suma(int a, int b) { return a + b; }

int Leer_numero() {
  int num1;

  std::cout << "ingrese un numero" << std::endl;

  std::cin >> num1;

  return num1;
}

void Saludo() {
  std::string nombre;
  std::getline(std::cin, nombre);

  std::cout << "Hola " << nombre << std::endl;
}

int main() {
  Saludo();
  std::cout << suma(Leer_numero(), 4);
  return 0;
}
