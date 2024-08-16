#include <iostream>

int main(){
    int number1;
    int number2;

    std::cout <<  "Digite o primero numero: ";
    std::cin >> number1;
    std::cout <<  "Digite o segundo numero: ";
    std::cin >> number2;

    int sum = number1 + number2;
    int sub = number1 - number2;
    int mult = number1 * number2;
    int divs = number1 / number2;
    int fdiv = (float)number1 / (float)number2;
    int res = number1 % number2;

    std::cout << " Resultado da soma: " << sum <<std::endl;
    std::cout << " Resultado da subtração: " << sub <<std::endl;
    std::cout << " Resultado da multiplicação: " << mult <<std::endl;
    std::cout << " Resultado da divisão: " << divs <<std::endl;
    std::cout << " Resultado da divisao real: " << fdiv <<std::endl;
    std::cout << " Resultado da resto: " << res <<std::endl;

    return 0;
}