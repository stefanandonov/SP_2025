//
// Created by Stefan Andonov on 29.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void encrypt (char * text){
    int j = 0;
    char result [100];

    for (int i=0;i<strlen(text);i++){
        if (tolower(text[i])=='s'){
            result[j++]='$';
        } else if (tolower(text[i])=='m'){
            result[j]=result[j+1]='^';
            j+=2;
        } else {
            result[j++]=text[i];
        }
    }

    result[j]='\0';

    strcpy(text, result);


}

int main () {

    int n;
    cin >> n;
    cin.ignore();

    char text [81];

    char longest [81] = "";

    for (int i = 0; i < n; ++i) {
        cin.getline(text, 80);

        if (strlen(text)>strlen(longest)){
            strcpy(longest, text);
        }
    }

    encrypt(longest);
    cout << longest;


//    for (int i=0;i<strlen(longest);i++){
//        if (tolower(longest[i])=='s'){
//            cout << '$';
//        } else if (tolower(longest[i])=='m'){
//            cout << "^^";
//        } else {
//            cout << longest[i];
//        }
//    }
    return 0;
}