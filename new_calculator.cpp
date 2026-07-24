#include <iostream>

using namespace std;

int main () {

    double num1, num2;
    char symbol; 

    cout << "enter your numbers: " << endl;
    cin >> num1;
    cin >> num2;
    
    cout << "enter symbol: ";
    cin >> symbol;

    if (symbol == '+') { 
        cout << num1 + num2;
    }

    else if (symbol == '-') {
        cout << num1 - num2;
    }

    else if (symbol == '*') {
        cout << num1 * num2;
    }

    else if (symbol == '/') {
        if (num2 != 0) {
            cout << num1 / num2; // 3. Added missing semicolon
        } else {
            cout << "no divisions by zero!!!"; // 4. Fixed missing closing quote
        }
    }
        
    else {
        cout << "ERROR";
    }

    return 0; 
}
