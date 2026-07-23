#include <iostream>

void printGreeting() {
    std::cout << "Welcome to lesson 10!" << std::endl;
}

int generateRandomNumber() {
    int min = 1;
    int max = 100;
    return min + (std::rand() % (max - min + 1));
}

int calculateArea(int width, int length) {
    return width * length;
}

int calculateFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * calculateFactorial(n - 1);
}

int main() {
    printGreeting();

    int randomNum = generateRandomNumber();
    std::cout << "[info] Random number generated: " << randomNum << std::endl;

    int area = calculateArea(7, 5);
    std::cout << "[info] Area of rectangle (width: 7, length: 5) is: " << area << std::endl;

    int factorial = calculateFactorial(6);
    std::cout << "[info] Factorial of 6 is: " << factorial << std::endl;

    return 0;
}
    