#include <stdio.h>
int n, dp[1000001];
int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i<=2) dp[i]=i;
        else dp[i]=((dp[i-1]%15746)+(dp[i-2]%15746))%15746;
    }
    printf("%d", dp[n]);
}
