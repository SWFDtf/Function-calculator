#include <iostream>
#include <unistd.h>
#include "clear.hpp"
#include "setFunctionType.hpp"

void setFunctionInMain(int FunctionValue) {
    int FunctionTypeInMain = FunctionValue;
}


int main() {
    int InputValue = 0163456;

    std::cout << "Language\n";
    std::cout << "\n";
    std::cout << "1. Deutsch\n";
    std::cout << "2. English\n";
    while (!(InputValue == 1 || InputValue == 2)) {
        if (!(InputValue == 0163456)) {
            std::cout << "That's not an option!";
            std::cout << "\n";
            std::cout << "Language\n";
            std::cout << "\n";
            std::cout << "1. Deutsch\n";
            std::cout << "2. English\n";
            clear();
        }
        std::cout << "\n" << "Please choose the Language: ";
        std::cin >> InputValue;
    }
    clear();
    int Language = InputValue;
    setFunctionType(Language);
    std::cout << "OK";
  
    return 0;
    

}
