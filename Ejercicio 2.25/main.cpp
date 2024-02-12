#include <iostream>
int main() {
    char opcion;
 do {
    // Se declaran con las variables con las cuales se quieren trabajar
    int num1, num2;

    // Se le pide al usuario el ingreso de estos mismos valores
    std::cout << "Ingrese los dos valores enteros deseados:\n";
    std::cin >> num1 >> num2;

    // Utilizando el operador modulo se le pide que realice la intevencion de los dos numeros y verificar si cumple y es multiplo
    if (num2 != 0 && num1 % num2 == 0) {
        std::cout << num1 << " Si se cumple y es multiplo de =  " << num2 << std::endl;
    } else {
        std::cout << num1 << " No se cumple y no es multiplo de =  " << num2 << std::endl;
    }
     std::cout << "¿Quiere verificar de nuevo? (si/no): ";
        std::cin >> opcion;

    } while (opcion == 'Si' || opcion == 'si');

    return 0;
}
