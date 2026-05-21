#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void doShit1() {
    string PASSWD = "TimeDoor@!67";
    string input;

    cout << "=== DO-WHILE LOOP PASSWORD CHECKER ===\n" << endl;

    do {
        cout << "enter the password: ";
        cin >> input;

        if (input != PASSWD) {
            cout << "\nincorrect password silly. please try again.\n" << endl;
            // the loop will continue until the correct password is entered
        }
    } while (input != PASSWD);

    cout << "password accepted. welcome!" << endl;
}

void doShit2() {
    cout << "=== FOR LOOP COUNTDOWN ===\n" << endl;

    for (int i = 10; i >= 0; i--) {
        cout << i << " \n";
    }
    cout << endl;
}

void doShit3() { 
    cout << "=== WHILE LOOP GUESSING GAME ===\n" << endl;

    int secretNumber = rand() % 100 + 1; // generates a random number between 1 and 100
    int guess;

    while (true) {
        cout << "guess the secret number: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "congratulations! you guessed it right!\n" << endl;
            break;
        } else {
            cout << "wrong guess sily. try again. (it's " << secretNumber << ") lol\n" << endl;
        }
    }
}

void doShit4() {
    cout << "=== NESTED LOOPS PATTERN ===\n" << endl;

    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* \n";
        }
        cout << endl;
    }
}

void doShit5() {
    cout << "=== LOOP WITH BREAK EXAMPLE ===\n" << endl;

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "breaking the loop in " << i << endl;
            break;
        }
        cout << "i = " << i << endl;
    }
}

void doShit6() {
    cout << "=== INFINITE LOOP EXAMPLE ===\n" << endl;

    while (true) {
        cout << "\nthis loop will run forever. press Ctrl+C to exit this app :)\n" << endl;
    }
}

int main() {
    doShit1();
    doShit2();
    doShit3();
    doShit4();
    doShit5();
    doShit6();
}