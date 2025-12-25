//
// Created by Stefan Andonov on 25.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main () {

    char text [100], result [100];;
    cin.getline(text,100);

    int start, length;
    cin >> start >> length;

//    for (int i=start;i<start+length && i<strlen(text);i++){
//        if (text[i]=='\0'){
//            break;
//        }
//        cout << text[i];
//    }
//      correct but not ideal!


    strncpy(result, text+start, length);
    cout << result;


    return 0;
}