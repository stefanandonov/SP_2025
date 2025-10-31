//
// Created by Stefan Andonov on 31.10.25.
//


#include<iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    int sum = 0;
    int count = 0;
    int reverse = 0;

    int tmp = number;
    while (tmp > 0) { //until there are digits left
        int lastDigit = tmp % 10; //extract last digit

        sum += lastDigit;
        ++count;
        reverse = 10 * reverse + lastDigit;

        tmp /= 10; //remove last digit
    }

    cout << "The sum of digits of the number " << number << " is " << sum << ". The number has " << count << " digits. ";
    cout << "Its reverse number is " << reverse << endl;
    if (number==reverse){
        cout << "This is also a palindrome!" <<endl;
    }
    return 0;
}