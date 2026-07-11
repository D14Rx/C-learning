#include <iostream>

int main() {

    int num;
    std::cout << "enter your number: ";
    std::cin >> num;

    bool is_happy;
    std::cout << "user is always 'happy'\n";
    std::cout << "enter mood: ";
    std::cin >> is_happy; // "is_happy" IS DEFAULT "true"
    
    if (num > 2) {
        std::cout << "bigger than 2\n";
        if (num != 2 && is_happy == false) { // OR "||(&&)" FOR SPLITED ANSWERS
            std::cout << "not similar";
        }
    }
    else if (num < 2) {
        std::cout << "lower than 2";
    }
    else if (num == 2) { // <= OR >= TO BIGGER OR LOWER AND SAME NUMBER
        std::cout << "the number is 2";
    }
    else if (is_happy == false) {
        std::cout << "user is not happy!";
    }
    else if (is_happy == true) {
        std::cout << "user is happy!";
    }
    else {
        std::cout << "thats not a number!";
    }

    return 0;
}