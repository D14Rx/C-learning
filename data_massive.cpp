#include <iostream>

using namespace std;

int main () {

    float nums[3]; // DATA MASSIVE COUNT (START WITH 0...not 1)
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    nums[0]++;
    nums[1] = 200;

    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;


    float nums2[5] = {1, 2, 3, 4, 5}; //ANOTHER WAY FOR DATA MASSIVES

    for (int i = 0; i < 5; i++) {
        cout << "element" << i << ": " << nums2[i] << endl;
    }



    float numbers[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter num " << i << ": ";
        cin >> numbers[i];
    }

    float summary = 0;
    float minimum = numbers[0];   
    for (int i = 0; i < 5; i++) {
        summary += numbers[i];
        if (numbers[i] < minimum)
            minimum = numbers[i];
            cout << "minimum is: " << minimum;
    }
    
    cout << "Summary: " << summary << endl;

    for(int i = 0; i < 5; i++)
        cout << "main nums: " << numbers[i] << endl;


    //MNOGOMER. MASSIVES:
    float matrix [3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };
    matrix[1][1] = 0.5;
    cout << matrix[3][1] << endl; //3 GROUP, 1 NUM
    
    for (int g = 0; g < 3; g++) { //GROUPS
        for (int n = 0; n < 2; n++) { //NUMBERS
            cout << matrix[g][n] << endl;
        }
    }

    return 0;
}