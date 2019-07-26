//
//  Training.cpp
//  
//
//  Created by John Neill on 26/07/2019.
//

#include "Training.hpp"
#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

int s[N];
long long sum[N];

void solve(int tc) {
    long long ans = 1e18;
    int n, p;
    scanf("%d %d", &n, &p);
    for (int i = 0; i < n; ++i)
        scanf("%d", s+i);
    sort(s, s+n);
    int dif[p-1];
    for(int i = 0; i < n-1; ++i){
        dif[i]=s[i+1]-s[i];
        //cout<<dif[i] << " ";
    }
    //cout << endl;
    int k = p;
    int counter=1;
    int no_count=0;
    int hours=9999;
    int sum=0;
    if(p!=n){
        for(int i= 0; i<n-1 ; i++){
            while(counter!=(k)){
                sum=sum+dif[counter+i-1];
                //cout<<sum<<" ";
                counter=counter+1;
            }
            //cout<<endl;
            
            counter=1;
            
            
            if(hours>sum){
                hours=sum;
                no_count=i;
            }
            sum=0;
        }
    }
    
    
    if(p==n){
        for(int i= 0; i<n-1 ; i++){
            while(counter!=(k)){
                sum=sum+dif[counter+i-1];
                //cout<<sum<<" ";
                counter=counter+1;
            }
            //cout<<endl;
            counter=i+2;
            
            if(hours>sum){
                hours=sum;
                no_count=i;
            }
            sum=0;
        }
        
        
    }
    //cout << no_count << " "  << (p-1) << endl;
    int high = no_count+(p-1);
    long hour=0;
    //cout << high << endl;
    
    for(int i= high; i>=(high-(p-1)); i--){
        hour=hour+(((s[high]-s[i])*(s[high]-s[i]))/(s[high]-s[i]));
        //cout<< high << " " << s[high] << " " << s[i] << endl;
        //cout<< hour << endl;
    }
    
    
    printf("Case #%d: %lld\n", tc, hour);
}

int main() {
    time_t startt = clock();
    int tt;
    scanf("%d", &tt);
    //cout << tt;
    for (int tc = 1; tc <= tt; tc++) {
        solve(tc);
        cerr << "~ #" << tc << " done! time : " << (double)(clock()-startt)/CLOCKS_PER_SEC << " s" << endl;
    }
    return 0;
}


