//
// Created by Stefan Andonov on 25.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int countRecursive(char *text, char c) {
    if (*text == '\0') {
        return 0;
    } else {
        return (*text == c) + countRecursive(text + 1, c);
    }
}


int countForLoop(char *text, char c) {
    int result = 0;
    for (int i = 0; i < strlen(text); ++i) {
        if (text[i] == c) {
            ++result;
        }
    }
    return result;
}

int count(char *text, char c) {
    int result = 0;

    while (*text) {
        if (*text == c) {
            ++result;
        }
        text++;
    }
    return result;
}

int main() {

    char text[100];

    cin.getline(text, 100);

    char c;
    cin >> c;

    cout << count(text, c);
    return 0;
}