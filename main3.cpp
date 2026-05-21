#include<iostream>
#include<string>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::string gender = "м";
    std::string zodiacSign = "овен";
    int age = 20;

    std::cout << "Введите пол: ";
    std::cin >> gender;
    std::cout << "Введите знак зодиака: ";
    std::cin >> zodiacSign;
    std::cout << "Введите возраст: ";
    std::cin >> age;

    std::string zodiacType = "ground";

    if (zodiacSign == "рак" || zodiacSign == "скорпион" || zodiacSign == "рыбы" || zodiacSign == "Рак" || zodiacSign == "Скорпион" || zodiacSign == "Рыбы"){
        zodiacType = "water";
    }
    else if (zodiacSign == "телец" || zodiacSign == "дева" || zodiacSign == "козерог" || zodiacSign == "Телец" || zodiacSign == "Дева" || zodiacSign == "Козерог"){
        zodiacType = "ground";
    }
    else if (zodiacSign == "близнецы" || zodiacSign == "весы" || zodiacSign == "водолей" || zodiacSign == "Близнецы" || zodiacSign == "Весы" || zodiacSign == "Водолей"){
        zodiacType = "air";
    }
    else if (zodiacSign == "овен" || zodiacSign == "лев" || zodiacSign == "стрелец" || zodiacSign == "Овен" || zodiacSign == "Лев" || zodiacSign == "Стрелец"){
        zodiacType = "fire";
    }else{
        zodiacType = "none";
    }



    if ((gender == "м" || gender == "М") && (zodiacType == "water") && age < 40){
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
    }
    else if((gender == "ж" || gender == "Ж") && (zodiacType == "ground") && (age >=15 && age <= 30)){
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок." << std::endl
        << "Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех.";
    }else{
        std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
    }

}