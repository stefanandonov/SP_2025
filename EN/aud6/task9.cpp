//
// Created by Stefan Andonov on 27.11.25.
//

#include<iostream>
using namespace std;

int main () {

    //Input:7 8 9 7 8 8 8 8 1 2 1 1 .
    //Output:
    //0->0
    //1->3
    //2->1
    //3->0
    //4->0
    //5->0
    //6->0
    //7->2
    //8->5
    //9->1

    int digit;
//    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
//    while (cin >> digit){
//        switch (digit) {
//            case 0:
//                c0++;break
//                NO, PLEASE, NO!
//        }
//    }

    int counters [10] = {0};
    /*  0,1,2,3,4,5,6,7,8,9
     * {0,0,0,0,0,0,0,0,0,0}
     * Input: 7
     * {0,0,0,0,0,0,0,1,0,0}
     * Input: 7
     * {0,0,0,0,0,0,0,2,0,0}
     * Input: 5
     *  0,1,2,3,4,5,6,7,8,9
     * {0,0,0,0,0,1,0,2,0,0}
     * */
    while(cin>>digit){
       counters[digit]++;
        for (int i = 0; i < 10; ++i) {
            if (counters[i]!=0) {
                cout << i << "->" << counters[i] << endl;
            }

        }
    }



    return 0;
}