#include <cstdio>
int N, A[10001], i, t, j;


int main()
{
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d", &t);
        A[t]++;
    }
    for(i=1;i<10001;i++){
        if(A[i]==0) continue;
        for(j=1;j<=A[i];j++) printf("%d\n", i);
    }
}
