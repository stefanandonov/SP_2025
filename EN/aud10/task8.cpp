//
// Created by Stefan Andonov on 25.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main () {

    char large [100] = "Stefan Andonov Example";
    char small [100] = "FINKI";

    cout << strstr(large, small);
    return 0;
}