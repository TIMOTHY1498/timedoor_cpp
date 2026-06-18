#include <iostream>
#include <string>

#include <unistd.h> // import SLEEP function for simulating delay

void func1() {
    int studentScore[10] = { 90, 85, 78, 92, 88, 95, 80, 82, 91, 87 };

    std::cout << "[INFO] student Scores: ";
    for (int i = 0; i < 10; i++) {
        std::cout << studentScore[i] << " ";
    }   

    std::cout << "\n";

    std::cout << "[INFO] student with odd indices:\n";
    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            std::cout << "student number " << i + 1 << " (index of " << i << "): " << studentScore[i] << "\n";
        }
    }

    std::cout << "==============================================\n";
}

void func2() {
    double suhu[24] = {
        24.5, 24.0, 23.8, 23.5, 23.2, 23.0, 
        24.1, 25.3, 26.8, 28.0, 29.5, 30.2, 
        31.0, 31.5, 30.8, 29.7, 28.5, 27.2,
        26.5, 25.8, 25.2, 25.0, 24.8, 24.6  
    };
    std::cout << "[INFO] old temperatures:\n";
    suhu[1] = 2;

    for (int i = 0; i < 24; i++) {
        std::cout << "[Hour " << i << "] (Index of " << i << "): " << suhu[i] << "°C\n";
    }

    std::cout << "\n[INFO] Updated temperatures (every 2 hours):\n";
    for (int i = 0; i < 24; i++) {
        if (i >= 2 && i % 2 == 0) {
            std::cout << "[Hour " << i << "] (Index of " << i << "): " << suhu[i] << "degree C [UPDATED]\n";
        } else {
            std::cout << "[Hour " << i << "] (Index of " << i << "): " << suhu[i] << "degree C\n";
        }
    }

    std::cout << "==============================================\n";
}

void func3() {
    int x[5][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };

    std::cout << "[INFO] 2D array values:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << x[i][j] << " ";
        }
        std::cout << "\n";
    }

        std::cout << "==============================================\n";
}

int main()
{
    func1();
    func2();
    func3();
    return 0;
}