//
// Created by Stefan Andonov on 6.10.25.
//

#include<iostream>

using namespace std;

int main() {
    float a, b, c;

    cin >> a >> b >> c;

    float perimeter = a + b + c;
    float s = perimeter / 2;
    float areaSquared = s * (s - a) * (s - b) * (s - c);
    cout << "For the triangle with sides: " << a << ", ";
    cout << b << ", " << c << " the perimeter is ";
    cout << perimeter << " and the square of the area is ";
    cout << areaSquared;
    return 0;
}