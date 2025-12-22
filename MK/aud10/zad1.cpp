//
// Created by Stefan Andonov on 22.12.25.
//


#include<iostream>
#include<cstring>

using namespace std;

int count (char * text, char ch){
    int c = 0;
    while (*text!='\0'){

        if (*text == ch){
            ++c;
        }
        text++;
    }
    return c;
}

int countR (char * text, char ch){
    if (*text=='\0'){
        return 0;
    } else {
        if (*text == ch){
            return 1 + countR(text+1,ch);
        } else {
            return countR(text+1,ch);
        }
    }
}

int countI (char * text, char ch){
    int c = 0;
    for (int i=0;i<strlen(text);i++){
        if (text[i]==ch){
            ++c;
        }
    }
    return c;
}

int main () {
    char text [200]; //199 znaci + \0

//    for (int i=0;i<200;i++){
//        cin >> text[i];
//    }

    cin.getline(text, 200); //with spaces
//    cin >> text; //without spaces
    char ch;
    cin >> ch;
//    cout << text;

    cout << countR(text,ch);
    return 0;
}
