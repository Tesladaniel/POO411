---
theme: default
class:
  - invert
  - leap
marp: true
lang: es-ES
---

# Programación Orientada a Objetos

## YOEL ANDEYCI PILIER MARTINEZ

### [yapmartinez@oymas.edu.do](mailto:yapmartinez@oymas.edu.do)

---

# C++

![bg  left:30% width:100% ](./imagenes/cpplogo.png)

C++ es un lenguaje de programación de propósito general creado por Bjarne Stroustrup en 1979. 
Es usado en:

- **Desarrollo de software** 
- **Juegos**
- **Sistemas operativos** 
- **Aplicaciones de alto rendimiento**

---

# Compilado vs Interpretado

![bg  left:30% width:100% ](./imagenes/compilado_interpretado.png)

---

# Compilado

![bg  left:30% width:100% ](./imagenes/compilado.png)

-**Proceso**: Código Fuente → Compilador → Código Máquina (Ejecutable) → Ejecución.

-**Velocidad**: Muy alta.

-**Detección de errores**: Los errores se encuentran durante la compilación (antes de que el programa corra).

-**Portabilidad**: Baja.

-**Ejemplos**: C, C++, Rust, Go, Zig.

---

# Interpretado

![bg  left:30% width:100% ](./imagenes/interpretado.png)

- **Proceso**: Código Fuente → Intérprete → Ejecución inmediata.
  
- **Velocidad**: Más lenta.
  
- **Detección de errores**: Los errores se descubren en tiempo de ejecución (el programa se detiene cuando llega a la línea con el error).
  
- **Portabilidad**: Alta.

- **Ejemplos**: Python, JavaScript, Ruby, PHP.

---
# Compiladores 


![bg  left:30% width:100% ](./imagenes/compiladores.png)

- **GCC (GNU Compiler Collection)**: Soporta C, C++, Fortran, Ada, entre otros.

- **Clang(LLVM)**: Un compilador moderno para C, C++ y Objective-C. Es conocido por su rápida compilación y mensajes de error claros.

---
# Hola Mundo

```cpp
#include <iostream>

int main() {
    std::cout << "Hola, Mundo!" << std::endl;
    return 0;
}
```

---
# Compilación y Ejecución

```bash
# compilar= 

g++ -std=c++20 -Wall -Wextra -Wpedantic -Werror  hola_mundo.cpp -o hola_mundo

# o

clang++ -std=c++20 -Wall -Wextra -Wpedantic -Werror hola_mundo.cpp -o hola_mundo

# ejecutar=
./hola_mundo
```
---

# Variables y Tipos de Datos


| Tipo de dato | Ejemplo | Tamaño típico | Valores límite (aprox.) |
|-------------|--------|--------------|--------------------------|
| int | `int age = 20;` | 4 bytes | -2,147,483,648 a 2,147,483,647 |
| float | `float pi = 3.14f;` | 4 bytes | ±3.4 × 10³⁸ |
| double | `double x = 2.0;` | 8 bytes | ±1.7 × 10³⁰⁸ |
| char | `char c = 'a';` | 1 byte | -128 a 127 *(o 0 a 255)* |
| bool | `bool alive = true;` | 1 byte | `false` / `true` |
| std::string | `std::string name = "Ana";` | ≥ 24 bytes* | Limitado por la memoria |

---

# Operadores

| Operador | Descripción | Ejemplo |
|----------|-------------|---------|
| `+` | Suma | `int sum = a + b;` |
| `-` | Resta | `int diff = a - b;` |
| `*` | Multiplicación | `int product = a * b;` |
| `/` | División | `int quotient = a / b;` |
| `%` | Módulo (resto) | `int remainder = a % b;` |
| `++` | Incremento | `a++;` |
| `--` | Decremento | `b--;` |

---

# Condicionales

```cpp
if (edad >= 18) {
    std::cout << "Eres mayor de edad." << std::endl;
} else {
    std::cout << "Eres menor de edad." << std::endl;
}
```

```cpp
switch (opcion) {
    case 1:
        std::cout << "Opción 1 seleccionada." << std::endl;
        break;
    case 2:
        std::cout << "Opción 2 seleccionada." << std::endl;
        break;
    default:
        std::cout << "Opción no válida." << std::endl;
}
```

---
# For y While

```cpp
for (int i = 0; i < 5; i++) {
    std::cout << "Iteración: " << i << std::endl;
}
```
```cpp
int count = 0;
while (count < 5) {
    std::cout << "Contador: " << count << std::endl;
    count++;
}
```
--- 
# Do While

```cpp
int count = 0;
do {
    std::cout << "Contador: " << count << std::endl;
    count++;
} while (count < 5);
```
---

# Funciones

```cpp
int sumar(int a, int b) {
    return a + b;
}
```

---
# Entrada y Salida

```cpp
std::string name;
std::cin >> name;
```

```cpp
std::string fullName;
std::getline(std::cin, fullName);
```
---

# Entrada y Salida

```cpp
int edad;
double salario;

if (std::cin >> edad >> salario) {
    std::cout << "Edad: " << edad << ", Salario: " << salario << std::endl;
} else {
    std::cerr << "Error: Entrada no válida." << std::endl;
}
```
---

# Entrada y Salida

```cpp
int id;
std::string nombreCompleto;

std::cin >> id;
std::cin.ignore(); // Limpiar el buffer después de leer el número
std::getline(std::cin, nombreCompleto);
```
--- 

# Manejo de Cadenas

```cpp
#include <sstream>

std::string datos = "Juan,25,Santo Domingo";
std::stringstream ss(datos);
std::string token;

while (std::getline(ss, token, ',')) {
    std::cout << "Dato extraído: " << token << std::endl;
}

```
--- 

# Manejo de Cadenas

```cpp
#include <sstream>

std::stringstream ss; // Empezamos vacío

std::string nombre = "Juan";
int edad = 25;
double puntaje = 95.5;

ss << nombre << "," << edad << "," << "Santo Domingo" << "," << puntaje;

std::string resultado = ss.str();


```

---
# Manejo de Archivos

```cpp
#include <fstream>
#include <string>

std::ifstream archivo("archivo.ext");
std::string linea;

if (archivo.is_open()) {
    while (std::getline(archivo, linea)) {
        std::cout << "Línea del archivo: " << linea << std::endl;
    }
} else {
    std::cerr << "Error: No se pudo abrir el archivo de lectura.";
}
```
---

# Manejo de Archivos

```cpp

#include <fstream>
std::ofstream archivo("archivo.ext", std::ios::app);
if (archivo.is_open()) {
    archivo << "Puntaje obtenido: " << 100 << std::endl;
} 

```

