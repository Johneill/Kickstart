//
//  Kickstart Alarm.cpp
//  
//
//  Created by John Neill on 26/07/2019.
//

#include "Kickstart Alarm.hpp"
#include <bits/stdc++.h>
#include <cmath>

using namespace std;


long long a[1000001];

long long int subarray(int n, int k){
    long int result = 0;
    long long int sum=0;
    for(int p=1; p<=k; p++){
        // Pick starting point
        for (int i=0; i <n; i++) {
            // Pick ending point
            for (int j=i; j<n; j++) {
                int fo=1;
                // sum subarray between current
                // starting and ending points
                for (int k=i; k<=j; k++){
                    
                    sum= sum+a[k]*pow(fo,p) ;
                    sum=sum%1000000007;
                    //cout << a[k]<< " "<< k <<" " <<pow(fo,p) << " ";
                    //cout << sum<<  ", ";
                    fo=fo+1;
                }
                //cout<<endl;
            }
        }
        
    }
    
    return sum;
}


void solve(int tc) {
    int n,k;
    scanf("%d%d",&n,&k);
    long long x1,y1,c,d,e1,e2,f;
    scanf("%lld%lld%lld%lld%lld%lld%lld",&x1,&y1,&c,&d,&e1,&e2,&f);
    a[0]=(x1+y1)%f;
    for(int i=1;i<n;i++){
        int    x=(c*x1+d*y1+e1)%f;
        int    y=(d*x1+c*y1+e2)%f;
        a[i]=(x+y)%f;
        x1=x;
        y1=y;
    }
    
    
    
    long long int ans = subarray(n,k);
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
