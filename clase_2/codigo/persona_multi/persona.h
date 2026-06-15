#pragma once

#include <iostream>

class Persona {
  std::string nombre;
  int edad;

public:
  Persona(std::string nombre, int edad);
  void Saludar();
  std::string get_nombre();
};
