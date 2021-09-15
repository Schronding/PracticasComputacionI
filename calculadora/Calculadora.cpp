#include <iostream>
int main() {
    int numOne = 1, numTwo = 1, total = 1;
    char operation;
    std::cout
            << "Choose the operation to execute: + (sum), * (multiplication), - (subtraction), / (division) or % (remainder)\n";
    std::cin >> operation;
    std::cout << "Enter the first number \n";
    std::cin >> numOne;
    std::cout << "Enter the second number \n";
    std::cin >> numTwo;
    if (operation == '+') { total = numOne + numTwo; }
    if (operation == '-') { total = numOne - numTwo; }
    if (operation == '/') { total = numOne / numTwo; }
    if (operation == '%') { total = numOne % numTwo; }
    if (operation == '*') { total = numOne * numTwo; }

    std::cout << "The result of the operation " << total << std::endl;
    return 0;
}
