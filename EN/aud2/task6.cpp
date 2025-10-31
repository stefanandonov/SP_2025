//
// Created by Stefan Andonov on 30.10.25.
//


#include<iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int number;
    cin >> number;

    int xx = 10 * x + x;
    int yy = 10 * y + y;
    int xy = 10 * x + y;
    int yx = 10 * y + x;
    int lastTwoDigits = number%100;

    if (lastTwoDigits==xx || lastTwoDigits==yy){
        cout << number << " Same digits" << endl;
    }
    else if (lastTwoDigits==xy || lastTwoDigits==yx){
        cout << number << " Different digits" << endl;
    } else {
        cout << number;
    }
        return 0;
}
