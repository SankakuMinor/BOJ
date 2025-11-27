#include <iostream>
using namespace std;


int M, N;
int a[501][501];
long long int dp[501][501];
bool visited[501][501];

long long int searchPath(int i, int j){
    if(i==1&&j==1) return 1;
    if (visited[i][j]) return dp[i][j];
    visited[i][j]=true;
    long long int cnt=0;
    if(i-1>0&&a[i][j]<a[i-1][j]){
        // cout<<i-1<<" "<<j<<endl;
        cnt+=searchPath(i-1, j);
    }
    if(i+1<=M&&a[i][j]<a[i+1][j]){
        // cout<<i+1<<" "<<j<<endl;
        cnt+=searchPath(i+1, j);
    }
    if(j-1>0&&a[i][j]<a[i][j-1]){
        // cout<<i<<" "<<j-1<<endl;
        cnt+=searchPath(i, j-1);
    }
    if(j+1<=N&&a[i][j]<a[i][j+1]){
        // cout<<i<<" "<<j+1<<endl;
        cnt+=searchPath(i, j+1);
    }
    dp[i][j]=cnt;
    return dp[i][j];
}

int main()
{
    cin>>M>>N;
    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++)
            cin>>a[i][j];
    }
    cout<<searchPath(M, N)<<endl;
    /*
    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    */
}
