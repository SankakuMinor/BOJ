#include <cstdio>

bool visited[9];
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
            if(visited[i]==0&&a[cnt]<i){
                visited[i]=1;
                a[++cnt]=i;
                dfs();
                a[cnt]=0;
                cnt--;
                visited[i]=0;
            }
        }
    }
}
int main()
{
    scanf("%d %d", &m, &n);
    dfs();
}
