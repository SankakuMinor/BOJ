#include <cstdio>
int N, K, A[11], i, ans, cnt;

void _input(){
    scanf("%d %d", &N, &K);
    for(i=1;i<=N;i++) scanf("%d", &A[i]);
    return;
}

int main()
{
    _input();
    for(i=N;i>=1;i--){
        while(ans+A[i]<=K){
            ans+=A[i];
            cnt++;
        }
    }
    printf("%d", cnt);
}
