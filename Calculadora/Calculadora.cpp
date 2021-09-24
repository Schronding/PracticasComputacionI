#include <iostream>
#include <cmath>
int main() {
    double numOne = 1, numTwo = 1, total = 1;
    char operation;
    std::cout << "Escoge la operacion a ejecutar: + (suma), * (multiplicacion), - (resta), / (division) o % (residuo)\n"
    << "Teclea el simbolo de la operacion\n";
    std::cin >> operation;
    std::cout << "Enter the first number \n";
    std::cin >> numOne;
    std::cout << "Enter the second number \n";
    std::cin >> numTwo;
    if (operation == '+') { total = numOne + numTwo; }
    if (operation == '-') { total = numOne - numTwo; }
    if (operation == '/') { total = numOne / numTwo; }
    if (operation == '%') { total = fmod(numOne, numTwo); }
    if (operation == '*') { total = numOne * numTwo; }

    std::cout << "Este programa hace operaciones basicas entre dos numeros.\n" << "Primer numero: " << numOne << std::endl;
    std::cout << "Operación " << operation << std::endl;
    std::cout << "Segundo numero: " << numTwo << "\n" << std::endl;
    std::cout << "Resultado: \n" << numOne << " " << operation << " " << numTwo << " = " << total << std::endl;
    return 0;
}
