#include <stdio.h>
#define MAX(a,b) a>b?a:b
int n, arr[100001], dp[100001], Max;
int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf("%d", &arr[i]);
    for(int i=1;i<=n;i++){
        if(dp[i-1]>0)
            dp[i]=dp[i-1]+arr[i];
        else dp[i]=arr[i];
    }
    Max=dp[1];
    for(int i=2;i<=n;i++)
        Max=MAX(Max, dp[i]);
    printf("%d", Max);
}
