#include <iostream>

class Persona {
public:
  std::string nombre;
  int edad;
  float sueldo;
};

int main() {
  Persona juan = Persona();

  juan.nombre = "Juan";
  juan.edad = 1800;
  juan.sueldo = 4.0f;

  std::cout << "nombre : " << juan.nombre << std::endl
            << "sueldo : " << juan.sueldo << std::endl
            << "edad : " << juan.edad;
  return 0;
}
