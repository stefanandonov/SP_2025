//
// Created by Stefan Andonov on 22.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool isPalindromeR (char * start, char * end){
    if (start>=end){
        return true;
    }

    if (!isalpha(*start)){
        return isPalindromeR(start+1,end);
    }
    if (!isalpha(*end)){
        return isPalindromeR(start,end-1);
    }
    if (tolower(*start)!=tolower(*end)){
        return false;
    } else {
        return isPalindromeR(start+1, end-1);
    }

}

bool isPalindrome (char * text) {
    char * startPtr = text;
    char * endPtr = text + strlen(text) - 1;

    while (startPtr<endPtr){
        if (*startPtr!=*endPtr) {
            return false;
        }
        startPtr++;
        endPtr--;
    }
    return true;


}

bool isPalindromeI (char * text) {
    int n = strlen(text);
    for (int i=0;i<n/2;i++){
        if (text[i]!=text[n-i-1]){
            return false;
        }
    }
    return true;
}

int main () {

    char text [200];

    cin.getline(text,200);
//    cout << isPalindromeI(text);
    cout << isPalindromeR(text, text + strlen(text) - 1);
    return 0;
}
