#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double side;
    double height;

public:
    Triangle(double side, double height);

    void setSide(double side);
    void setHeight(double height);

    double getSide() const;
    double getHeight() const;

    double getArea() const;
};

#endif
#include "Triangle.h"
#include <stdexcept>

Triangle::Triangle(double side, double height) {
    setSide(side);
    setHeight(height);
}

void Triangle::setSide(double side) {
    if (side <= 0) {
        throw std::invalid_argument("Сторона должна быть больше нуля");
    }

    this->side = side;
}

void Triangle::setHeight(double height) {
    if (height <= 0) {
        throw std::invalid_argument("Высота должна быть больше нуля");
    }

    this->height = height;
}

double Triangle::getSide() const {
    return side;
}

double Triangle::getHeight() const {
    return height;
}

double Triangle::getArea() const {
    return side * height / 2.0;
}