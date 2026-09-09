#include <iostream>

using namespace std;

int main() {
    double side;
    double height;

    cout << "Введите сторону треугольника: ";
    cin >> side;

    cout << "Введите высоту треугольника: ";
    cin >> height;

    if (side <= 0 || height <= 0) {
        cout << "Ошибка: сторона и высота должны быть больше 0." << endl;
        return 1;
    }

    double area = side * height / 2.0;

    cout << "Площадь треугольника: " << area << endl;

    return 0;
}