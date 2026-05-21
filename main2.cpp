#include<iostream>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    std::cout  << "Введите первое число: ";
    std::cin >> n1;
    std::cout  << "Введите второе число: ";
    std::cin >> n2;
    std::cout  << "Введите третье число: ";
    std::cin >> n3;


    int max =   (n1 >= n2 && n1 >= n3) ? n1 : (n2 >= n1 && n2 >= n3) ? n2 : n3;
    int mid =   ((n1 <= n2 && n1 >= n3) || (n1 <= n3 && n1 >= n2)) ? n1 : 
                ((n2 <= n1 && n2 >= n3) || (n2 <= n3 && n2 >= n1)) ? n2 : n3;
    int min =   (n1 <= n2 && n1 <= n3) ? n1 : (n2 <= n1 && n2 <= n3) ? n2 : n3;

    std::cout  << "Результат: " << max << " " << mid << " " << min;

}