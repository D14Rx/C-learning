#include <iostream>
#include <string>

using namespace std;

void print(string word) {
    cout << word << endl;
}


int add(int a, int b) {
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
}

int main() {

    //WORDS:
    print("first message");
    string word2 = "second message";
    print(word2);


    //NUMBERS:
    int res1 = add(2, 4);
    int res2 = add(5, 7);

    if(res2 > res1) {
        cout << "second num is bigger!!!" << endl;
        cout << res1 << endl;
    } else {
        cout << res2 << endl;
    }
sssssssssss
    return 0;
}
