//
//  Number_guessing.cpp
//  
//
//  Created by John Neill on 26/07/2019.
//

#include "Number_guessing.hpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int k = 1; k <= T; ++k){
        int A,B,N,G;
        cin >> A >> B >> N;
        ++A;
        string s;
        G = (A+B)/2;
        cout << G << endl;
        while(cin >> s){
            if(s == "CORRECT") break;
            else if(s == "TOO_SMALL") A = G+1;
            else B = G-1;
            G = (A+B)/2;
            cout << G << endl;
        }
    }
    return 0;
}
