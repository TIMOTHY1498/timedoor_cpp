#include <iostream>

using namespace std;

int main() {
    int inputNumber = 0;

    cout << "Enter a number: ";
    cin >> inputNumber;

    if (inputNumber % 2 == 0) { // This block will execute if the number is even
        cout << "The number is even." << endl;
    } else { // This block will execute if the number is odd
        cout << "The number is odd." << endl;
    }

    return 0;
}
