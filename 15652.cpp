#include <cstdio>

int a[9];

int m, n, cnt;

void dfs()
{
    if(cnt==n){
        for(int i=1;i<=n;i++){
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }
    else{
        for(int i=1;i<=m;i++){
            if(a[cnt]<=i)
            {
                a[++cnt]=i;
                dfs();
                a[cnt]=0;
                cnt--;
            }
        }
    }
}
int main()
{
    scanf("%d %d", &m, &n);
    dfs();
}
