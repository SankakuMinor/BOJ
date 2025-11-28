#include <cstdio>
int N, t, ans;

int main()
{
    scanf("%d", &N);
    t=N;
    t=t%10*10+(t%10+t/10)%10;
        ans++;
    while(N!=t){
        t=t%10*10+(t%10+t/10)%10;
        ans++;
    }
    printf("%d", ans);
}
