#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

int s[N];
long long sum[N];




void solve(int tc) {
char board[1000][1000];    
char actions[100];
for(int i=0; i<101; i++){
    actions[i]=' ';
}
int N,R,C,SR,SC;
scanf("%d %d %d %d %d", &N, &R, &C, &SR, &SC);
for (int y = 0; y<= C; y++) {
    for (int x = 0; x<= R; x++) {
        board[x][y] = '-';
    }
}
board[SR][SC]='V';
cin >> actions;
//cout << actions;
int i=0;
int V=0;
while(actions[i]!=' '){
    //cout << actions[i] << endl;
    if(actions[i]=='E'&& (SC+1)<=C){
        //cout<<"East"<< endl;
        board[SR][SC]='V';
        if(board[SR][SC+1]=='-'){
            SC=SC+1;
            board[SR][SC]='V';
        }
        else{
            while(board[SR][SC]!='-'){
                SC=SC+1;
            }
        }
        
    }
    if (actions[i]=='N' && (SR-1)>=1){
        //cout<< "North" << endl;
        board[SR][SC]='V';
        if(board[SR-1][SC]=='-'){
            SR=SR-1;
            //cout << "LLLL" << endl;
            board[SR][SC]='V';
        }
        else{
            while(board[SR][SC]!='-'){
                SR=SR-1;
            }
        }
    }
    if(actions[i]=='W' && (SC-1)>=1){
        V=SC;
        //cout<< "West" << endl;
        board[SR][SC]='V';
        //cout << board[SR][SC-1] << endl;
        if(board[SR][SC-1]=='-'){
            SC=SC-1;
            //cout << "LLLL" << endl;
            board[SR][SC]='V';
        }
        else{
            while(board[SR][SC]!='-'){
                SC=SC-1;
                
            }
        }
    }
    if (actions[i]=='S' && (SR)<=R+1){
        //cout<< "South" << SR << board[SR+1][SC] << endl;
        board[SR][SC]='V';
        if(board[SR+1][SC]=='-'){
            SR=SR+1;
            board[SR][SC]='V';
            //cout << SR << endl;
        }
        else{
            while(board[SR][SC]=='V'){
                SR=SR+1;
            }
        }
       
    }
    
    
    board[SR][SC]='V';
    i++;
}
//cout << endl;
//cout << SR << " " << SC;
  printf("Case #%d: %lld %lld\n", tc, SR, SC);
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
