#include <iostream>
#include <vector>

std::vector<int> bubbleSort(const std::vector<int>& numbers) {
    std::vector<int> sortedNumbers = numbers;
    int n = sortedNumbers.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (sortedNumbers[j] > sortedNumbers[j + 1]) {
                std::swap(sortedNumbers[j], sortedNumbers[j + 1]);
            }
        }
    }
    return sortedNumbers;
}

std::vector<int> quickSort(const std::vector<int>& numbers) {
    if (numbers.size() <= 1) {
        return numbers;
    }

    int pivot = numbers[numbers.size() / 2];
    std::vector<int> less;
    std::vector<int> equal;
    std::vector<int> greater;

    for (int num : numbers) {
        if (num < pivot) {
            less.push_back(num);
        } else if (num == pivot) {
            equal.push_back(num);
        } else {
            greater.push_back(num);
        }
    }

    std::vector<int> sortedLess = quickSort(less);
    std::vector<int> sortedGreater = quickSort(greater);

    sortedLess.insert(sortedLess.end(), equal.begin(), equal.end());
    sortedLess.insert(sortedLess.end(), sortedGreater.begin(), sortedGreater.end());

    return sortedLess;
}

int main() {
    // Exercise 1: Sort the age list

    int exerc1_AGE[6] = {35, 20, 42, 18, 28, 30};
    std::cout << "[info] sorted age list" << std::endl;

    std::vector<int> ageVector(exerc1_AGE, exerc1_AGE + 6);
    std::vector<int> sortedAges = quickSort(ageVector);
    for (int i = 0; i < 6; ++i) {
        std::cout << sortedAges[i] << " ";
    }
    std::cout << std::endl;

    // Exercise 2: Sort the score list

    int exerc2_AGE[6] = {85, 92, 78, 96, 88, 90};
    std::cout << "[info] sorted score list" << std::endl;

    std::vector<int> scoreVector(exerc2_AGE, exerc2_AGE + 6);
    std::vector<int> sortedScores = quickSort(scoreVector);
    for (int i = 0; i < 6; ++i) {
        std::cout << sortedScores[i] << " ";
    }
    std::cout << std::endl;

    // Exercise 3: Sort the price list

    int exerc3_AGE[6] = {12, 9, 5, 15, 8, 11};
    std::cout << "[info] sorted price list" << std::endl;

    std::vector<int> priceVector(exerc3_AGE, exerc3_AGE + 6);
    std::vector<int> sortedPrices = quickSort(priceVector);
    for (int i = 0; i < 6; ++i) {
        std::cout << sortedPrices[i] << " ";
    }
    std::cout << std::endl;

}