//
// Created by Stefan Andonov on 20.10.25.
//


#include<iostream>

using namespace std;

int main() {
    int lineNumber;
    cin >> lineNumber;

    int waitTime = (lineNumber - 1) * 5;

    if (lineNumber > 60) {
        cout << "Studentot ne e voopsto usluzen";
        return 0;
    }
    //lineNumber <= 60
    if (lineNumber > 24 && lineNumber <= 36) {
        waitTime += 30;
    } else if (lineNumber > 36 && lineNumber <= 60) {
        waitTime += 60;
    }
    cout << "Hours: " << waitTime / 60 << ", minutes: " << waitTime % 60;


    return 0;
}