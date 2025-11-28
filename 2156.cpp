#include <stdio.h>
#define MAX(a, b) a>b?a:b
int n, dp[10001], stair[10001], MAX_ELEMENT;

int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf("%d", &stair[i]);
    for(int i=1;i<=n;i++){
        if(i==1){
            dp[i]=stair[1];
            continue;
        }
        dp[i]=MAX(dp[i-2]+stair[i], dp[i-3]+stair[i-1]+stair[i]);
        dp[i]=MAX(dp[i], dp[i-1]);
    }
    printf("%d", dp[n]);
}
