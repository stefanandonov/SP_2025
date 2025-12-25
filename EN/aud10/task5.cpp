//
// Created by Stefan Andonov on 25.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool isPalindromeR (char * text, int left, int right){
    if (left>=right){
        return true;
    }
    if (text[left]!=text[right]){
        return false;
    }
    return isPalindromeR(text, left+1, right-1);
}

bool isPalindrome(char * text){
    int n = strlen(text);

    for (int i=0;i<n/2;i++){
        if (text[i]!=text[n-i-1]){
            return false;
        }
    }

    return true;
}

int main () {
    char text[100];

    cin >> text;
    cout << isPalindromeR(text, 0, strlen(text)-1);
    return 0;
}