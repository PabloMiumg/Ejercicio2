#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << numero << " es un numero par." << std::endl;
    } else {
        std::cout << numero << " no es un numero par." << std::endl;
    }

    return 0;
}


