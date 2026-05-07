#include <iostream>

using namespace std;

int main() {
    int num1;
    cout << "Enter an age: ";

    if (num1 <= 12) {
        cout << "You are an kid." << endl;
    } else if (num1 < 19)   {
        cout << "You are a minor. (or teenager)" << endl; 
    } else if (num1 < 59) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior." << endl;
    }

    return 0;
}