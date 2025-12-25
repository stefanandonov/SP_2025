//
// Created by Stefan Andonov on 25.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

void trim (char * text){
    char * start = text;

    while (isspace(*start)){
        start++;
    }

    strcpy(text, start);

    char * end = text+strlen(text)-1;

    while(isspace(*end)){
        --end;
    }

    *(end+1)='\0';

}

void trimForLoop (char * text){

    int start=0,end=strlen(text)-1;
    for (int i=0;i<strlen(text);i++){
        if (!isspace(text[i])){
            start = i;
            break;
        }
    }

    for (int i=strlen(text)-1;i>start;i--){
        if (!isspace(text[i])){
            end = i;
            break;
        }
    }

    text[end+1]='\0';
    strcpy(text, text+start);

}



int main () {

    char text[100];

    cin.getline(text,100);
    trimForLoop(text);
    cout << text;
    return 0;
}