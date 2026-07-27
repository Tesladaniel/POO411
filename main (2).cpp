#include <iostream>
#include <string>

using namespace std;

class Persona
{
protected:
    string nombre;

public:
    Persona(string n)
    {
        nombre = n;
    }
};

class Estudiante : public Persona
{
private:
    string matricula;

public:
    Estudiante(string n,string m)
        : Persona(n)
    {
        matricula = m;
    }

    void mostrar()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Matricula: " << matricula << endl;
    }
};

int main()
{
    Estudiante e("Daniel","2025-001");

    e.mostrar();

    return 0;
}