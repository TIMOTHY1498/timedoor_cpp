// oop_lesson13.cpp
#include <iostream>

class Student {
    private:
        std::string Name;
        int Age;
        double Height;
        bool IsActive;
        int StudentNumber;
        int YearEnter;
        std::string Gender;

    public:
        void printStudentBasicInformation() {
            std::cout << "======[ STUDENT INFO ]=======\n";
            std::cout << "Name     : " << Name << "\n";
            std::cout << "Age      : " << Age << "\n";
            std::cout << "Height   : " << Height << "\n";
            std::cout << "IsActive : " << std::boolalpha << IsActive << "\n";
        };

        int getStudentActiveYearTime() {
            std::time_t now = std::time(nullptr);
            std::tm* local_time = std::localtime(&now);

            int CurrentYear = local_time->tm_year + 1900; // get current year
            local_time = nullptr;

            return CurrentYear - YearEnter;
        }

        int printStudentActiveInfo() {
            if (IsActive == true) {
                std::cout << "The student still active learning" << "\n";
            } else if (IsActive == false) {
                std::cout << "The student has already graduated and inactive right now" << "\n";
            } else {
                std::cout << "The student status is unknown\n";
            }
        }

        // cool constructor epik
        Student(std::string name2, int age2, double height2, bool isActive2, int yearEnter2, int studentNum2, std::string gender2) {
            this->Name = name2;
            this->Age = age2;
            this->Height = height2;
            this->StudentNumber = studentNum2;
            this->YearEnter = yearEnter2;
            this->IsActive = isActive2;
            this->Gender = gender2;
        };
};

int main() {
    Student timothy(
        "Timothy Brennan Saragi", 
        15,
        175.5,
        true,
        2023,
        22,
        "Male"
    );

    timothy.printStudentBasicInformation();
    std::cout << "Active since " << timothy.getStudentActiveYearTime() << " years ago\n";
    timothy.printStudentActiveInfo();
}