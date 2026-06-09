#include <iostream>
#include <vector>

class Pantalla {
  int altura;
  int anchura;

public:
  Pantalla(int h, int w) {
    this->altura = h;
    this->anchura = w;
  }
  int get_anchura() { return this->anchura; }
  int get_altura() { return this->altura; }
};

int main() {
  Pantalla pantallas[] = {Pantalla(512, 512), Pantalla(1080, 1920)};
  int index = 1;

  std::cout << "Primera pantalla: " << pantallas[index].get_altura() << " "
            << pantallas[index].get_anchura();

  return 0;
}
