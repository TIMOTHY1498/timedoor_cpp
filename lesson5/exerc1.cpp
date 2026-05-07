#include <iostream>
#include <string>

using namespace std;

int main() {
    int score;
    cout << "enter your score: ";
    cin >> score;
    cout << "\nyour score is: " << score << endl;
    if (score >= 90) {
        cout << "you got an A!" << endl;
    } else if (score >= 80) {
        cout << "you got a B!" << endl;
    } else if (score >= 70) {
        cout << "you got a C!" << endl;
    } else if (score >= 60) {
        cout << "you got a D!" << endl;
    } else {
        cout << "you got an F!" << endl;
    }
    return 0;
}   