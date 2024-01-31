#include <iostream>

int main() {
    double numero1, numero2;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    if (numero1 == numero2) {
        std::cout << "Los numeros son iguales." << std::endl;
    } else {
        std::cout << "Los numeros no son iguales." << std::endl;
    }

    return 0;
}


