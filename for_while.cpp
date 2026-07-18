#include <iostream>
#include <time.h>

using namespace std;

int main() {

    for(int i = 100; i >= 1; i-= 2) { 
        cout << "results: " << i << endl;

        if (i == 10)
            break;

        if (i % 2 == 0)
            continue;
    }


    float j = 100;
    while (j > 50) {
        cout << "results_2: " << j << endl;
        j /= 1.5;
    }


    int a = 100;
    do {
        cout  << "results_3: " << a << endl;
        a -= 3;
        cout << "analysing..." << a << endl;
    } while (a < 10);


    srand(time(NULL));
    int random = 1 + rand() % 20; //FORM 1 TO 20
    bool stop = false;
    int user_input;

    do {
        cout << "enter num: ";
        cin >> user_input;
        if (user_input != random)
            cout << "wrong!" << endl;
        else 
            stop = true;
    } while (!stop);


    return 0; 
}
