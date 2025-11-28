#include <stdio.h>
int n, dp[1001];
int main()
{
    scanf("%d", &n);
    dp[1]=1;
    dp[2]=3;
    for(int i=3;i<=n;i++){
        dp[i]=(dp[i-2]*2+dp[i-1])%10007;
    }
    printf("%d", dp[n]);
}
