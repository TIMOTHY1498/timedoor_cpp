#include <iostream>

using namespace std;

int main() {
    int num1;
    cout << "Enter an age: ";

    if (num1 <= 12) {
        cout << "price: $2" << endl;
    } else if (num1 < 59)   {
        cout << "price: $5" << endl;
    } else {
        cout << "price: $6.5" << endl;
    }

    return 0;
}