#include<iostream>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << std::boolalpha <<"Оператор: ||" << std::endl;
    std::cout << "true    true    " << (true || true) << std::endl;
    std::cout << "false   true    " << (false || true) << std::endl;
    std::cout << "true    false   " << (true || false) << std::endl;
    std::cout << "false   false   " << (false || false) << std::endl << std::endl;

    std::cout << std::boolalpha <<"Оператор: &&" << std::endl;
    std::cout << "true    true    " << (true && true) << std::endl;
    std::cout << "false   true    " << (false && true) << std::endl;
    std::cout << "true    false   " << (true && false) << std::endl;
    std::cout << "false   false   " << (false && false) << std::endl;
}