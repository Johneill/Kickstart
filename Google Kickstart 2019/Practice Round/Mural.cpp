//
//  Mural.cpp
//  
//
//  Created by John Neill on 26/07/2019.
//

#include "Mural.hpp"
#include <bits/stdc++.h>

using namespace std;


int n =1000;
char store[1000];

int subarrays(int counter, int n1){
    int sum=0;
    int max_sum=0;
    for(int i=0; i<=n1-counter; i++){
        for(int j=i; j<=(i+counter-1); j++){
            sum=sum+store[j];
        }
        
        if(sum>max_sum){
            max_sum=sum;
        }
        //cout << sum << endl;
        sum=0;
    }
    return max_sum;
}


void solve(int tc) {
    int n1;
    scanf("%d", &n1);
    int sum = 0;
    for (int i = 0; i < n1; ++i) {
        cin>> store[i];
        store[i] = store[i]-48;
        //cout<< store[i];
        //cout << "i ";
    }
    int counter=(n1+1)/2;
    int ans;
    //cout << counter << endl;
    
    ans= subarrays(counter, n1);
    
    
    
    
    
    printf("Case #%d: %lld\n", tc, ans);
}

int main() {
    time_t startt = clock();
    int tt;
    scanf("%d", &tt);
    for (int tc = 1; tc <= tt; tc++) {
        solve(tc);
        cerr << "~ #" << tc << " done! time : " << (double)(clock()-startt)/CLOCKS_PER_SEC << " s" << endl;
    }
    return 0;
}
