#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;

public:

    friend istream& operator>>(istream& entrada,Persona& p)
    {
        cout << "Nombre: ";
        getline(entrada,p.nombre);

        return entrada;
    }

    void mostrar()
    {
        cout << "Nombre: " << nombre << endl;
    }

};

int main()
{
    Persona p;

    cin >> p;

    p.mostrar();

    return 0;
}