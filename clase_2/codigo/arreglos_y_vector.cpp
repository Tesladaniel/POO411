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
  std::vector<Pantalla> pantallas;

  for (int i = 0; i < 100; i++) {

    pantallas.push_back(Pantalla(1080, 1920));

    std::cout << "Agregamos la pantalla " << i + 1 << std::endl;
  }

  std::cout << "Anchura de pantalla 43 " << pantallas.at(43).get_anchura()
            << std::endl;
  return 0;
}
