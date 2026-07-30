#include <iostream>
#include <string>
using namespace std;

int main() {

    char word[] = "HI!"; // {'H', 'I', '!'}
    
    for (int i = 0; i < 3; i++) // LETTER NUMBERS.
        cout << word[i];

    string words = "hello world!";
    words[1] = 'i';

    cout << '\n' << words << endl;

    cin >> words;
    cout << 'New word: ' << words;

    return 0;
}
