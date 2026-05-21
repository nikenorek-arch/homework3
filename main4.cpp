#include<iostream>
#include<string>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n1 = 0;
    int n2 = 0;


  

    std::cout  << "Введите целое число: ";
    std::cin >> n1;
    std::cout  << "Введите целое число: ";
    std::cin >> n2;

    std::string numberName1 = "";
    std::string numberName2 = "";

    int safe_n1 = n1;
    int safe_n2 = n2;

    if ((n1 > -100 && n1 < 100) && (n2 > -100 && n2 < 100)){




        //ОБРАБОТКА ПЕРВОГО ЧИСЛА
        if (n1 < 0) {
            numberName1 = "минус ";
            n1 *= -1;
        }

        if (n1 <= 10){
            switch (n1){
                case 0: numberName1 += "ноль"; break;
                case 1: numberName1 += "один"; break;
                case 2: numberName1 += "два"; break;
                case 3: numberName1 += "три"; break;
                case 4: numberName1 += "четыре"; break;
                case 5: numberName1 += "пять"; break;
                case 6: numberName1 += "шесть"; break;
                case 7: numberName1 += "семь"; break;
                case 8: numberName1 += "восемь"; break;
                case 9: numberName1 += "девять"; break;
                case 10: numberName1 += "десять"; break;
                default:break;
            }
        }
        else if (n1 >= 11 && n1 <=19){
            switch (n1){
                case 11: numberName1 += "одиннадцать"; break;
                case 12: numberName1 += "двенадцать"; break;
                case 13: numberName1 += "тринадцать"; break;
                case 14: numberName1 += "четырнадцать"; break;
                case 15: numberName1 += "пятнадцать"; break;
                case 16: numberName1 += "шестнадцать"; break;
                case 17: numberName1 += "семнадцать"; break;
                case 18: numberName1 += "восемнадцать"; break;
                case 19: numberName1 += "девятнадцать"; break;
                default:break;
            }
        }
        else if (n1 >= 20 && n1 <=99){
            int dozens = n1 / 10;
            int units = n1 % 10;
            switch (dozens){
                case 2: numberName1 += "двадцать "; break;
                case 3: numberName1 += "тридцать "; break;
                case 4: numberName1 += "сорок "; break;
                case 5: numberName1 += "пятьдесят "; break;
                case 6: numberName1 += "шестьдесят "; break;
                case 7: numberName1 += "семьдесят "; break;
                case 8: numberName1 += "восемьдесят "; break;
                case 9: numberName1 += "девяносто "; break;
                default:break;
            }
            switch (units){
                case 1: numberName1 += "один"; break;
                case 2: numberName1 += "два"; break;
                case 3: numberName1 += "три"; break;
                case 4: numberName1 += "четыре"; break;
                case 5: numberName1 += "пять"; break;
                case 6: numberName1 += "шесть"; break;
                case 7: numberName1 += "семь"; break;
                case 8: numberName1 += "восемь"; break;
                case 9: numberName1 += "девять"; break;
                default:break;
            }
            
        }


        //ОБРАБОТКА ВТОРОГО ЧИСЛА
        if (n2 < 0) {
            numberName2 = "минус ";
            n2 *= -1;
        }

        if (n2 <= 10){
            switch (n2){
                case 0: numberName2 += "ноль"; break;
                case 1: numberName2 += "один"; break;
                case 2: numberName2 += "два"; break;
                case 3: numberName2 += "три"; break;
                case 4: numberName2 += "четыре"; break;
                case 5: numberName2 += "пять"; break;
                case 6: numberName2 += "шесть"; break;
                case 7: numberName2 += "семь"; break;
                case 8: numberName2 += "восемь"; break;
                case 9: numberName2 += "девять"; break;
                case 10: numberName2 += "десять"; break;
                default:break;
            }
        }
        else if (n2 >= 11 && n2 <=19){
            switch (n2){
                case 11: numberName2 += "одиннадцать"; break;
                case 12: numberName2 += "двенадцать"; break;
                case 13: numberName2 += "тринадцать"; break;
                case 14: numberName2 += "четырнадцать"; break;
                case 15: numberName2 += "пятнадцать"; break;
                case 16: numberName2 += "шестнадцать"; break;
                case 17: numberName2 += "семнадцать"; break;
                case 18: numberName2 += "восемнадцать"; break;
                case 19: numberName2 += "девятнадцать"; break;
                default:break;
            }
        }
        else if (n2 >= 20 && n2 <=99){
            int dozens = n2 / 10;
            int units = n2 % 10;
            switch (dozens){
                case 2: numberName2 += "двадцать "; break;
                case 3: numberName2 += "тридцать "; break;
                case 4: numberName2 += "сорок "; break;
                case 5: numberName2 += "пятьдесят "; break;
                case 6: numberName2 += "шестьдесят "; break;
                case 7: numberName2 += "семьдесят "; break;
                case 8: numberName2 += "восемьдесят "; break;
                case 9: numberName2 += "девяносто "; break;
                default:break;
            }
            switch (units){
                case 1: numberName2 += "один"; break;
                case 2: numberName2 += "два"; break;
                case 3: numberName2 += "три"; break;
                case 4: numberName2 += "четыре"; break;
                case 5: numberName2 += "пять"; break;
                case 6: numberName2 += "шесть"; break;
                case 7: numberName2 += "семь"; break;
                case 8: numberName2 += "восемь"; break;
                case 9: numberName2 += "девять"; break;
                default:break;
            }
            
        }

        if (safe_n1 > safe_n2){
            std::cout  << numberName1 << " больше чем " << numberName2;
        }

        else if (safe_n1 < safe_n2){
            std::cout  << numberName1 << " меньше чем " << numberName2;
        }
        else {
            std::cout  << numberName1 << " равно " << numberName2;
        }



    }else{
        std::cout  << "Ошибка! Одно из чисел вне диапазона!" << numberName1;
    }









}