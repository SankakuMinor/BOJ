#include <stdio.h>
#define INF 987654321
int n, test_case[100], dp[12];

void Return()
{
    for(int i=1;i<=11;i++){
        dp[i]=0;
    }
}
int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf("%d", &test_case[i]);
    for(int i=1;i<=n;i++){
        int x=test_case[i];
        for(int j=1;j<=x;j++){
            if(j==1){
                dp[j]=1;
                continue;
            }
            if(j==2){
                dp[j]=2;
                continue;
            }
            if(j==3){
                dp[j]=4;
                continue;
            }
            dp[j]=dp[j-1]+dp[j-2]+dp[j-3];
        }
        printf("%d\n", dp[x]);
        Return();
    }
}
