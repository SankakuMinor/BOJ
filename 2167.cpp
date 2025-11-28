#include <stdio.h>
int N, M, arr[301][301];
int a, b, x, y, K;

int main()
{
    scanf("%d %d", &N, &M);
    for(int i=1;i<=N;i++)
        for(int j=1;j<=M;j++)
            scanf("%d", &arr[i][j]);
    scanf("%d", &K);
    for(int countk=1;countk<=K;countk++){
        scanf("%d %d %d %d", &a, &b, &x, &y);
        int t=0;
        for(int i=a;i<=x;i++){
            for(int j=b;j<=y;j++){
                t+=arr[i][j];
            }
        }
        printf("%d\n", t);
    }
}
