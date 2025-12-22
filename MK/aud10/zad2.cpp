//
// Created by Stefan Andonov on 22.12.25.
//


#include<iostream>
#include<cstring>

using namespace std;

int main () {

    char text [200];
    int start, length;

    cin.getline(text,200);
    cin >> start >> length;

    for (int i=start;i<start+length;i++){
        cout << text[i];
    }
    cout << endl;

//    cout << text << start << length;

//    cout << text+start;

    char result [200];

    strncpy(result, text+start, length);
    cout << result;
    return 0;
}
