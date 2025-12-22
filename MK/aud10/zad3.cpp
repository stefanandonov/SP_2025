//
// Created by Stefan Andonov on 22.12.25.
//


#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool isSubStringShort(char *large, char *small) {
    char *res = strstr(large, small);
    if (res != nullptr) {
        return true;
    } else {
        return false;
    }
}

bool isSubString(char *large, char *small) {
    if (strlen(small) > strlen(large)) {
        return false;
    }

    for (int i = 0; i <= strlen(large) - strlen(small); i++) {
        if (tolower(large[i]) != tolower(small[0])) {
            continue;
        }
        bool match = true;
        for (int j = 0; j < strlen(small); j++) {
            if (toupper(small[j]) != toupper(large[i + j])) {
                match = false;
                break;
            }
        }

        if (match) {
            return true;
        }
    }
    return false;
}

int main() {
    char large[200];
    char small[200];

    cin.getline(large, 200);
    cin.getline(small, 200);

//    cout << isSubString(large,small);

    cout << isSubStringShort(large,small);

//    cout << strstr(large,small);


    return 0;
}
