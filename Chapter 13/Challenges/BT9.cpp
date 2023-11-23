﻿#include <iostream>

class Circle {
private:
    double radius;
    const double pi = 3.14159;

public:
    Circle() : radius(0.0) {}

    Circle(double r) : radius(r) {}

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    double getArea() const {
        return pi * radius * radius;
    }

    double getDiameter() const {
        return radius * 2;
    }

    double getCircumference() const {
        return 2 * pi * radius;
    }
};

int main() {
    double radius;

    
    std::cout << "Nhập bán kính của vòng tròn: ";
    std::cin >> radius;


    Circle circle(radius);

   
    std::cout << "Diện tích: " << circle.getArea() << std::endl;
    std::cout << "Đường kính: " << circle.getDiameter() << std::endl;
    std::cout << "Chu vi: " << circle.getCircumference() << std::endl;

    return 0;
}