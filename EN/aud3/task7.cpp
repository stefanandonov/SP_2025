//
// Created by Stefan Andonov on 31.10.25.
//


#include<iostream>

using namespace std;

int main() {
    int number, previous, max_pos, pos, max_sum, sum;

    cin >> previous >> number;
    pos = 2;
    max_pos = pos;
    max_sum = previous + number;

    previous = number;
    while (cin >> number) {

        if (previous<0 && number<0){
            break;
        }

        ++pos;
        sum = previous + number;
        if (sum > max_sum) {
            max_pos = pos;
            max_sum = sum;
        }


        previous = number;
    }

    cout << max_sum;
    cout << "(" << max_pos-1 << ", " << max_pos << ")" << endl;

    return 0;
}