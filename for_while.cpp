#include <iostream>

using namespace std;

int main() {

    for(int i = 100; i >= 1; i-= 2) {
        cout << "results: " << i << endl;

        if (i == 67) {
            cout << "six seven!!!!\n";
        }
    }

    return 0; 
}