#include <math.h>

#include <iostream>

using namespace std;

int main() {
    int base, height;
    float hypotenuse, perimeter, area;

    cout << "Enter base of triangle in cm: ";
    cin >> base;
    cout << "Enter height of triangle in cm: ";
    cin >> height;

    hypotenuse = sqrt(base * base + height * height);

    perimeter = base + height + hypotenuse;
    area = 0.5 * base * height;

    cout << "Hypotenuse = " << hypotenuse << " cm";
    cout << "\nPerimeter = " << perimeter << " cm";
    cout << "\nArea = " << area << " cm^2";

    return 0;
}
