//
// Created by Stefan Andonov on 22.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

void transform (char * text){
    int j=0;

    for (int i=0;i<strlen(text);i++){
        if (isalpha(text[i])){
            if (islower(text[i])){
                text[j]=toupper(text[i]);
            } else { //uppercase
                text[j]=tolower(text[i]);
            }
            ++j;
        }
    }
    text[j]='\0';
}

int main () {

    char text [200];
    cin.getline(text,200);

    transform(text);

    cout << text;
    return 0;
}
