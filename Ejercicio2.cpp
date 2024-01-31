#include <iostream>

int main() {
    int anio;

    std::cout << "Ingrese un anio: ";
    std::cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        std::cout << anio << " es un anio bisiesto." << std::endl;
    } else {
        std::cout << anio << " no es un anio bisiesto." << std::endl;
    }

    return 0;
}


