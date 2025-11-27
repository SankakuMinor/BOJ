#include <iostream>
#include <algorithm>
using namespace std;


int n, k;
int coin[101];
int dp[100001];

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>coin[i];
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int m=coin[i];m<=k;m++)
            dp[m]+=dp[m-coin[i]];
        // for(int i=1;i<=k;i++) cout<<dp[i]<<" ";
        // cout<<endl;
    }
    
    cout<<dp[k]<<endl;
}
