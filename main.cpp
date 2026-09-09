#include <iostream>
#include <stdexcept>

using namespace std;

class Triangle {
private:
    double side;
    double height;

public:
    Triangle(double side, double height) {
        setSide(side);
        setHeight(height);
    }

    void setSide(double side) {
        if (side <= 0) {
            throw invalid_argument("Сторона должна быть больше нуля");
        }

        this->side = side;
    }

    void setHeight(double height) {
        if (height <= 0) {
            throw invalid_argument("Высота должна быть больше нуля");
        }

        this->height = height;
    }

    double getSide() const {
        return side;
    }

    double getHeight() const {
        return height;
    }

    double getArea() const {
        return side * height / 2.0;
    }
};

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