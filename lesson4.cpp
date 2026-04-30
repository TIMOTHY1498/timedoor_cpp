#include <string>
#include <iostream>
#include <cmath>

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
    int num2 ; // Calculate 25% of the number
    num = num * (1 - 0.25);
    cout << "ur item price is: $" << num << endl;
}

void chekda(int jumlahHari) {
    string hari[] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};

    int indeksHariBaru = jumlahHari % 7;

    cout << "after " << jumlahHari << " days, the day will be: " << hari[indeksHariBaru] << endl;
}

void pizza(int jumlahTamu) {
    const int KAPASITAS_PIZZA = 8; // Each pizza can serve 8 guests
    int jumlahPizza = ceil((double)jumlahTamu / KAPASITAS_PIZZA);
    cout << "u need " << jumlahPizza << " pizzas for " << jumlahTamu << " guests." << endl;
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

    int jumlahHari;
    cout << "enter the number of days: ";
    cin >> jumlahHari;
    chekda(jumlahHari);

    int jumlahTamu;
    cout << "enter the number of guests: ";
    cin >> jumlahTamu;
    pizza(jumlahTamu);

    return 0;
}