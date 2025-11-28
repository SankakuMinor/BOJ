#include <stdio.h>
#define INF 987654321
#define MAX(a, b) a>b?a:b
int n, dp[101][10], i, j;
int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i==1){
            for(int j=0;j<=9;j++)
                dp[n][j]=1;
            continue;
        }
        for(int j=0;j<=9;j++){
            if(j==0)
                dp[n-i+1][j]=(dp[n-i+2][j+1])%1000000000;
            else if(j==9)
                dp[n-i+1][j]=(dp[n-i+2][j-1])%1000000000;
            else
                dp[n-i+1][j]=(dp[n-i+2][j-1]+dp[n-i+2][j+1])%1000000000;
        }
    }
    int cnt=0;
    for(int i=1;i<=9;i++){
        cnt+=dp[1][i];
        cnt%=1000000000;
    }
    printf("%d", cnt);
}
