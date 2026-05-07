#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    cout << "XXXXXXXXXX   XXXXXXXX  XXXXXXXX\nX        X   X      X  X      X\nX        X   X      X  X      X\nX        X   XXXXXXXX  XXXXXXXX\nX        X   X      X  X      X\nX        X   X      X  X      X\nXXXXXXXXXX   XXXXXXXX  XXXXXXXX" << endl;
    Sleep(1500);

    string menu;
    cout << "1. start\n2. settings\n3. exit\n > " << endl;
    cin >> menu;

    switch (menu[0]) {
        case '1':
            cout << "starting the game..." << endl;
            MessageBoxW(NULL, L"welcome to the game!", L"greeting", MB_OK | MB_ICONINFORMATION);
            break;
        case '2':
            cout << "opening settings..." << endl;
            MessageBoxW(NULL, L"settings opened!", L"wow", MB_OK | MB_ICONINFORMATION);
            break;
        case '3':
            cout << "exiting the game..." << endl;
            MessageBoxW(NULL, L"goodbye!", L"farewell", MB_OK | MB_ICONINFORMATION);
            break;
        default:
            cout << "invalid option" << endl;
    }

    return 0;
}