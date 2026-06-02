#include <iostream>

class Persona {
  int edad;
  float sueldo;

  std::string nombre;

public:
  Persona(std::string n) {
    this->nombre = n;
    this->edad = 0;
    this->sueldo = 0;
  }
  ~Persona() { std::cout << "Se nos fue " << this->nombre << std::endl; }
  void Saludar() {
    std::cout << "Hola mi nombre es " << this->nombre << std::endl;
  }
  void Set_edad(int _edad) {
    if (_edad > 0)
      this->edad = _edad;
  }

  void Set_sueldo(float _sueldo) {
    if (_sueldo > 0)
      this->sueldo = _sueldo;
  }
  int get_edad() { return this->edad; }
  float get_sueldo() { return this->sueldo; }
  std::string get_nombre() { return this->nombre; }
};

int main() {
  Persona juan = Persona("Juan");
  Persona pablo = Persona("Pablos");
  {
    Persona pedro = Persona("pedro");
    pedro.Saludar();
  }
  juan.Set_edad(1800);
  juan.Set_sueldo(4.0f);

  pablo.Set_sueldo(5000);
  pablo.Set_edad(17);

  juan.Saludar();
  std::cout << "Mi sueldo es :" << juan.get_sueldo() << std::endl;
  pablo.Saludar();

  std::cout << "Mi sueldo es :" << pablo.get_sueldo() << std::endl;
  return 0;
}
