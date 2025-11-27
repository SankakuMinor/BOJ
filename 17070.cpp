#include <iostream>
using namespace std;

int N;
bool arr[17][17];
int dp[17][17];
int cnt=0;

// mode1: 가로, 가로 or 대각선
// mode2: 세로, 세로 or 대각선
// mode3: 대각선, 가로 or 세로 or 대각선


void dfs(int x, int y, int mode){

    if(x>N||y>N) return;
    if(x==N&&y==N){
        cnt++;
        return;
    }
    switch(mode){
        case 1:
            if(arr[x][y+1]==0)
                dfs(x, y+1, 1);
            if(arr[x+1][y]==0&&arr[x][y+1]==0&&arr[x+1][y+1]==0)
                dfs(x+1, y+1, 3);
            break;
        case 2:
            if(arr[x+1][y]==0)
                dfs(x+1, y, 2);
            if(arr[x+1][y]==0&&arr[x][y+1]==0&&arr[x+1][y+1]==0)
                dfs(x+1, y+1, 3);
            break;
        case 3:
            if(arr[x][y+1]==0)
                dfs(x, y+1, 1);
            if(arr[x+1][y]==0)
                dfs(x+1, y, 2);
            if(arr[x+1][y]==0&&arr[x][y+1]==0&&arr[x+1][y+1]==0)
                dfs(x+1, y+1, 3);
            break;
    }
    return;
}

int main()
{
    cin>>N;
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            cin>>arr[i][j];
    
    dfs(1, 2, 1);
    cout<<cnt<<endl;
    return 0;
}   
