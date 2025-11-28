#include <stdio.h>
long long int n, dp[101], trg[10001];
int main()
{
    scanf("%d", &n);
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    dp[5]=2;
    dp[6]=3;
    dp[7]=4;
    dp[8]=5;
    dp[9]=7;
    dp[10]=9;
    for(int i=1;i<=n;i++)
        scanf("%d", &trg[i]);
    for(int i=11;i<=100;i++){
        dp[i]=dp[i-1]+dp[i-5];
    }
    for(int i=1;i<=n;i++)
    printf("%lld\n", dp[trg[i]]);
}
