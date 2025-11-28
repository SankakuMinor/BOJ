#include <stdio.h>
#define INF 987654321
int n, t1=INF, t2=INF, t3=INF, dp[1000001];
int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        t1=dp[i-1]+1;
        if(i%2==0) t2=dp[i/2]+1;
        if(i%3==0) t3=dp[i/3]+1;
        t1=t1<t2?t1:t2;
        t1=t1<t3?t1:t3;
        dp[i]=t1;
        t1=t2=t3=INF;
    }
    printf("%d", dp[n]-1);
}
