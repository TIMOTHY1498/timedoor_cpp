#include <iostream>

namespace Shape {
    class BaseShape {
        private:
            std::string Name;
            int Sides;
            double Area;
            double Perimeter;
        public:
            void printShapeBasicInformation() {
                std::cout << "======[ SHAPE INFO ]=======\n";
                std::cout << "Name      : " << Name << "\n";
                std::cout << "Sides     : " << Sides << "\n";
                std::cout << "Area      : " << Area << "\n";
                std::cout << "Perimeter : " << Perimeter << "\n";
            };

            BaseShape(std::string name2, int sides2, double area2, double perimeter2) {
                this->Name = name2;
                this->Sides = sides2;
                this->Area = area2;
                this->Perimeter = perimeter2;
            };  
    };

    class Circle : public BaseShape {
        private:
            double Radius;
        public:
            void printCircleInformation() {
                std::cout << "======[ CIRCLE INFO ]=======\n";
                std::cout << "Radius : " << Radius << "\n";
            };

            Circle(std::string name2, int sides2, double area2, double perimeter2, double radius2) 
                : BaseShape(name2, sides2, area2, perimeter2) {
                this->Radius = radius2;
            };
    };

    class Square : public BaseShape {
        private:
            double SideLength;
        public:
            void printSquareInformation() {
                std::cout << "======[ SQUARE INFO ]=======\n";
                std::cout << "Side Length : " << SideLength << "\n";
            };

            Square(std::string name2, int sides2, double area2, double perimeter2, double sideLength2) 
                : BaseShape(name2, sides2, area2, perimeter2) {
                this->SideLength = sideLength2;
            };
    };
}

int main() { // oop_lesson14.cpp
    Shape::Circle circle("Circle", 0, 3.14, 6.28, 1);
    Shape::Square square("Square", 4, 4, 8, 2);

    circle.printShapeBasicInformation();
    circle.printCircleInformation();

    square.printShapeBasicInformation();
    square.printSquareInformation();

    return 0;
}