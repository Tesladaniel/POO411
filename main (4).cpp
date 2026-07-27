#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;

public:

    Persona(string n)
    {
        nombre = n;
    }

    friend ostream& operator<<(ostream& salida,const Persona& p)
    {
        salida << "Nombre: " << p.nombre;

        return salida;
    }

};

int main()
{
    Persona p("Daniel");

    cout << p << endl;

    return 0;
}