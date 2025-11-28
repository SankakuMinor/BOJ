#include <stdio.h>
#define INF 987654321
#define MAX(a, b) a>b?a:b
int n, dp[301], stair[301], i, j;

int main()
{
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        scanf("%d", &stair[i]);
    for(i=1;i<=n;i++){
        if(i==1) {
            dp[i]=stair[i];
            continue;
        }
        if(i==2) {
            dp[i]=stair[1]+stair[2];
            continue;
        }
        dp[i]=MAX(dp[i-2]+stair[i], dp[i-3]+stair[i-1]+stair[i]);
    }
    printf("%d", dp[n]);
}
