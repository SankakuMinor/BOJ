#include <iostream>
using namespace std;

int N, K;
int dp[201][201];


int main()
{
    cin>>N>>K;
    
    dp[0][0]=1;
    for(int i=1;i<=K;i++){
        for(int j=0;j<=N;j++){
            if(j==0){
                dp[i][0]=1;
                continue;
            }
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%1000000000;
        }
    }
    cout<<dp[K][N];
}
