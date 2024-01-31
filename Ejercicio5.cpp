#include <iostream>

int main() {
    float calificacion;

    std::cout << "Ingrese la calificacion del estudiante: ";
    std::cin >> calificacion;

    if (calificacion >= 60) {
        std::cout << "El estudiante aprobo el examen." << std::endl;
    } else {
        std::cout << "El estudiante no aprobo el examen." << std::endl;
    }

    return 0;
}

