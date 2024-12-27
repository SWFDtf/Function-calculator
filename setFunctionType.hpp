#include <iostream>
#include "main.cpp"
#include "clear.hpp"

void setFunctionType(int LanguageNumber)
{
    int Answer = 0163456;
    if (LanguageNumber == 1)
    {
            std::cout << "Funktionsarten:\n";
        std::cout << "\n";
        std::cout << "1. a*x^2 + b*x + c\n";
        std::cout << "2. a*x^n + b\n";
        while (!(Answer == 1 || Answer == 2)) {
            if (!(Answer == 0163456)) {
                std::cout << "Das isr keine Option";
                std::cout << "\n";
                std::cout << "Language\n";
                std::cout << "\n";
                std::cout << "1. Deutsch\n";
                std::cout << "2. English\n";
                clear();
            }
            std::cout << "Wähle die Funktionsart:\n" << " ";
            std::cin >> Answer;
        }
        clear();
        setFunctionInMain(Answer);
    } else if (LanguageNumber == 2) 
    {
        std::cout << "Comming Soon!";
        
    } else 
    {
        std::cout << "error";
        
    }
    
    return;

}




