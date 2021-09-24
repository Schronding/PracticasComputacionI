#include <iostream>
#include <cmath>
int main() {
    double numOne = 1, numTwo = 1, total = 1;
    char operation;

    std::cout << "Este programa hace operaciones basicas entre dos numeros.\n";
    std::cout << "Primer numero:"; std::cin >> numOne;
    std::cout << "Operación"; std::cin >> operation;
    std::cout << "Segundo numero:"; std::cin >> numTwo; std::cout << "\n";
    if (operation == '+') { total = numOne + numTwo; }
    if (operation == '-') { total = numOne - numTwo; }
    if (operation == '/') { total = numOne / numTwo; }
    if (operation == '%') { total = fmod(numOne, numTwo); }
    if (operation == '*') { total = numOne * numTwo; }
    std::cout << "Resultado: \n" << numOne << " " << operation << " " << numTwo << " = " << total << std::endl;
    return 0;
}
