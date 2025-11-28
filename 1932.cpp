#include <stdio.h>
#define MAX(a, b) a>b?a:b
int n, dp[501][501];
int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            scanf("%d", &dp[i][j]);
        }
    }
    for(int i=n-1;i>=1;i--)
        for(int j=1;j<=i;j++)
            dp[i][j]+=MAX(dp[i+1][j], dp[i+1][j+1]);
    printf("%d", dp[1][1]);
}
