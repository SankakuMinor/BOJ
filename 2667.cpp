#include <stdio.h>
#include <algorithm>
using namespace std;

int N, i, j, cnt, a[10001], ans, t1, t2;
char d[26][26];

void DFS(int X, int Y){
    cnt++;
    d[X][Y]=2;
    if(d[X+1][Y]=='1') DFS(X+1, Y);
    if(d[X-1][Y]=='1') DFS(X-1, Y);
    if(d[X][Y+1]=='1') DFS(X, Y+1);
    if(d[X][Y-1]=='1') DFS(X, Y-1);
    return;
}


int main()
{
    scanf("%d", &N);
    for(i=0;i<N;i++) scanf("%s", d[i]);
    for(i=0;i<N;i++){
        for(j=0;j<=N;j++){
            if(d[i][j]=='1'){
                DFS(i, j);
                a[ans++]=cnt;
                cnt=0;
            }
        }
    }
    sort(a, a+ans);
    printf("%d\n", ans);
    for(i=0;i<ans;i++) printf("%d\n", a[i]);

}
