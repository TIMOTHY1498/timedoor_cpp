#include <iostream>
#include <string>

using namespace std;

int main() {
    int numid;

    cout << "enter a number: ";
    cin >> numid;
    cout << "\n";

    if (numid == 1) {
        cout << "idk" << endl;
    } else if (numid == 2) {
        cout << "idk" << endl;
    } else if (numid == (3 > 5 ? 3 : 5)) {
        cout << "season is spring" << endl;
    } else if (numid == (6 > 8 ? 6 : 8)) {
        cout << "season is autumn" << endl;
    } else if (numid == (6 > 8 ? 6 : 8)) {
        cout << "you entered five!" << endl;
    } else {
        cout << "unknown" << endl;
    }
    return 0;
}