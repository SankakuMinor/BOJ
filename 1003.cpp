#include <stdio.h>
int n, test_case[10000];
struct NUM{
    int zero;
    int one;
};
NUM dp[41];

void Return(){
    for(int i=0;i<=40;i++)
        dp[i].zero=dp[i].one=0;
}
int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf("%d", &test_case[i]);
    for(int i=0;i<=40;i++){
        if(i==0){
            dp[i].zero=1;
            dp[i].one=0;
            continue;
        }
        if(i==1){
            dp[i].zero=0;
            dp[i].one=1;
            continue;
        }
        dp[i].zero=dp[i-1].zero+dp[i-2].zero;
        dp[i].one=dp[i-1].one+dp[i-2].one;
    }
    for(int i=1;i<=n;i++)
        printf("%d %d\n", dp[test_case[i]].zero, dp[test_case[i]].one);
}
