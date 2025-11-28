#include <cstdio>

int N, A, t, i;

int main()
{
    scanf("%d %d", &N, &A);
    for(i=1;i<=N;i++){
        scanf("%d", &t);
        if(t<A) printf("%d ", t);
    }
}
