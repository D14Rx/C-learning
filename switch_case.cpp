#include <iostream>

int main() {
    
    int num;
    std::cout << "enter your number: ";
    std::cin >> num;

    switch(num) {
    case 6: // ONLY ONE NUMBER IN "case"
        std::cout << "num is 6"; 
        break; // "break" - TO STOP THE OPERATION
    case 8:
        std::cout << "num is 8";
        break;
    default:
        std::cout << "theres no need numbers!";
        break;
    }

    return 0;
}