#include <iostream>
using namespace std;

int n, k;
int coin[101];
int dp[10001];

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>coin[i];

    for(int num=0;num<n;num++){
        int currentCoin=coin[num];
        for(int money=1;money<=k;money++){
            if (money-currentCoin<0){
                //cout<<dp[money]<<" ";
                continue;
            } 
            if(money==currentCoin){
                dp[money]=1;
                //cout<<dp[money]<<" ";
                continue;
            }
            if(dp[money-currentCoin]==0){
                //cout<<dp[money]<<" ";
                continue;
            }
            if(dp[money]==0){
                dp[money]=dp[money-currentCoin]+1;
                //cout<<dp[money]<<" ";
                continue;
            }
            dp[money]=min(dp[money], dp[money-currentCoin]+1);
            //cout<<dp[money]<<" ";
        }
        //cout<<endl;
        
    }
    if(dp[k]==0) cout<<"-1"<<endl;
    else cout<<dp[k]<<endl;
    return 0;

}
