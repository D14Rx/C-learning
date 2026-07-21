#include <iostream>
#include <time.h> // INCLUDE TIME FUNCTIONS

using namespace std; // SET DEFAULT NAMESPACE AS - "std"

int main() {

    srand(time(NULL)); // SET EVERY TIME DIFFERENT NUIMBERSS
    int result = 1 + rand() % 100; // RANDOM NUMBERS FRTOM 1 TO 100
    cout << result << endl;

    float num1, num2;

    cout << "enter num1: ";
    cin >> num1;

    cout << "enter num2: ";
    cin >> num2;

    char math;
    cout << "enter symbol: ";
    cin >> math;

    if (math == '+') {
        cout << num1 + num2;
    }
    else if (math == '-') {
        cout << num1 - num2;
    }
    else if(math == '*') {
        cout << num1 * num2;
    }
    else if(math == '/') {
        cout << num1 / num2;
    }
    else {
        cout << "error...";
    }

    /*switch(math) {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "error" << endl;
        break;
    }*/

    /*int a = 10, b = 3, z; 
    z = a % b;
    cout << z; // the number remaining after division*/

    return 0;
}