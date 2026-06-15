#include "persona.h"
#include <iostream>

Persona::Persona(std::string nombre, int edad) {
  this->nombre = nombre;
  this->edad = edad;
}

std::string Persona::get_nombre() { return this->nombre; }

void Persona::Saludar() {
  std::cout << "hola soy " << this->nombre << " y tengo " << this->edad
            << " anos" << std::endl;
}
