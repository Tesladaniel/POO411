#include<iostream>
#include<vector>
#include<string>

struct Estudiante {
    std::string nombre;
    std::string apellido;
    std::string matricula;
};

int main()
{
    std::vector<Estudiante> estudiantes;

    std::cout << "Pon 5 estudiantes" << std::endl;
    for(int i=0; i<5; i++) {
        Estudiante e;
        std::cout << "\nEstudiante " << i+1 << std::endl;
        std::cout << "Nombre: ";
        std::cin >> e.nombre;
        std::cout << "Apellido: ";
        std::cin >> e.apellido;
        std::cout << "Matricula: ";
        std::cin >> e.matricula;
        estudiantes.push_back(e);
    }

    std::cout << "\n--- LISTA DE ESTUDIANTES ---" << std::endl;
    for(int i=0; i<estudiantes.size(); i++) {
        std::cout << i+1 << ". " << estudiantes[i].nombre << " "
                  << estudiantes[i].apellido << " Mat: "
                  << estudiantes[i].matricula << std::endl;
    }
    return 0;
}