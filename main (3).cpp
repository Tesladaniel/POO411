#include <iostream>

using namespace std;

class Almacenamiento
{
public:

    void guardar()
    {
        cout << "Guardando datos..." << endl;
    }

    void cargar()
    {
        cout << "Cargando datos..." << endl;
    }

};

int main()
{
    Almacenamiento a;

    a.guardar();

    a.cargar();

    return 0;
}