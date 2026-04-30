#include <string>
#include <iostream>

using namespace std;

void calculateLemonadeCost(int lemons) {
    int cost = 0;
    cost += lemons * 2; // Each lemon costs $2
    cout << "Cost of lemons: $" << cost << endl;
}

void calculateFlowerCost(int rows) {
    int flowers = rows * 6; // Each row has 6 flowers
    cout << "total of flowers: " << flowers << endl;
}

void askforpersentagednum(int num) {
    int num2 ; // Calculate 15% of the number
    num = num * (1 - 0.25);
    cout << "ur item price is: $" << num << endl;
}

int main() {
    int lemons;
    cout << "how many lemons do you want to buy? ";
    cin >> lemons;
    calculateLemonadeCost(lemons);

    int rows;
    cout << "how many rows of flowers do you want? ";
    cin >> rows;
    calculateFlowerCost(rows);

    int num;
    cout << "enter the price of the item: ";
    cin >> num;
    askforpersentagednum(num);

    return 0;
}