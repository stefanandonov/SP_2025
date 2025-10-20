//
// Created by Stefan Andonov on 13.10.25.
//


#include<iostream>

using namespace std;

int main() {
    int points;
    cin >> points;

//    if (points < 50) {
//        cout << 5;
//    } else if (points >= 50 && points < 60) {
//        cout << 6;
//    } else if (points >= 60 && points < 70) {
//        cout << 7;
//    } else if (points >= 70 && points < 80) {
//        cout << 8;
//    } else if (points >= 80 && points < 90) {
//        cout << 9;
//    } else {
//        cout << 10;
//    }

//    if (points>=90){
//        cout << 10;
//    } else if (points>=80){
//        cout << 9;
//    } else if (points>=70){
//        cout << 8;
//    } else if (points>=60){
//        cout << 7;
//    } else if (points>=50){
//        cout << 6;
//    } else {
//        cout << 5;
//    }

    int grade = points/10 + 1;
    if (grade>10){
        grade = 10;
    }
    else if (grade < 5){
        grade = 5;
    }
    cout << grade;
    return 0;
}