#include <iostream>
#include <stdexcept>
#include "Triangle.h"

using namespace std;

int main() {
    double side;
    double height;

    cout << "Введите сторону треугольника: ";
    cin >> side;

    cout << "Введите высоту треугольника: ";
    cin >> height;

    try {
        Triangle triangle(side, height);

        cout << "Площадь треугольника: "
             << triangle.getArea() << endl;
    }
    catch (const invalid_argument& error) {
        cout << "Ошибка: " << error.what() << endl;
    }

    return 0;
}