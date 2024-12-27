#include <iostream>

void clear() {
    // Clears the console
    std::cout << "\x1B[2J\x1B[H";

}