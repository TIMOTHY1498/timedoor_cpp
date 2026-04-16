#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype> 

#include <math.h>

using namespace std;

int main() {
    string name;
    string extra;

    cout << "enter a random text: ";
    cin >> name;
    
    cout << "\nyou entered: " << name << endl;
    cout << "\nthe length of the text is: " << name.length() << endl;
    cout << "\nthe first five characters of the text are: " << name.substr(0, 5) << endl;

    string upperName = name;
    transform(upperName.begin(), upperName.end(), upperName.begin(), ::toupper);

    cout << "\nthe text in uppercase is: " << upperName << endl;

    cout <<  "\n\n\n" << endl;

    cout << "enter another random text: ";
    cin >> extra;
    cout << "\nthe two texts combined are: " << name + " " + extra << endl;

    cout << "\nhello! " << name << " you entered smth silly: " << extra << endl;

    cout << "enter a number: ";
    double num;

    cin >> num;
    cout << "\nthe area of the circle with the radius " << num << " is: " << M_PI * num * num << endl;

    return 0;
}