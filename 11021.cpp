#include <stdio.h>

int N, t1, t2, i;

int main()
{
    scanf("%d", &N);
    for(i=1;i<=N;i++){
        scanf("%d %d", &t1, &t2);
        printf("Case #%d: %d\n", i, t1+t2);
    }
}
