//
// Created by Stefan Andonov on 25.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool substringShortest(char * large, char * small){
    return strstr(large,small)!=0;
}

bool substring(char * large, char *small){
    for (int i=0;i<=strlen(large)-strlen(small);i++){

//        bool match = true;
//        for (int j=0;j<strlen(small);j++){
//            if (small[j]!=large[i+j]){
//                match = false;
//                break;
//            }
//        }
//
//        if (match){
//            return true;
//        }

        if (strncmp(small, large+i, strlen(small))==0){
            return true;
        }
    }
    return false;
}

int main () {

    char large[100],small[100];

    cin.getline(large,100);
    cin.getline(small,100);

    if (strlen(small)>strlen(large)){
        cout << 0;
        return 0;
    }

    cout << substringShortest(large,small);


    return 0;
}