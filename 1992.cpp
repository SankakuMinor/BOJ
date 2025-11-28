#include <stdio.h>
int n, a[129][129], white, blue;
char c[65];
void input(int k){
    scanf("%s", c);
    for(int i=0;i<n;i++){
        a[k][i+1]=c[i]-48;
    }
}
int confirm(int x1, int x2, int y1, int y2){
    int cnt=0;
    for(int i=x1; i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            if(a[i][j]==1) cnt++;
        }
    }
    if(cnt==0){
        printf("0");
        return 1;
    }
    if(cnt==(x2-x1+1)*(y2-y1+1)){
        printf("1");
        return 1;
    }
    return 0;
}
void paper(int x1, int x2, int y1, int y2){
    if(x1==x2){
        if(a[x1][y1]==0) printf("0");
        else printf("1");
        return;
    }
    int flag=0;
    if(confirm(x1, x2, y1, y2)){
        return;
    }
        printf("(");
    if(flag==0){
    if(confirm(x1,(x1+x2)/2,y1,(y1+y2)/2)==0) paper(x1,(x1+x2)/2,y1,(y1+y2)/2);
    if(confirm(x1,(x1+x2)/2,(y1+y2)/2+1,y2)==0) paper(x1,(x1+x2)/2,(y1+y2)/2+1,y2);
    if(confirm((x1+x2)/2+1,x2,y1,(y1+y2)/2)==0) paper((x1+x2)/2+1,x2,y1,(y1+y2)/2);
        if(confirm((x1+x2)/2+1,x2,(y1+y2)/2+1,y2)==0) paper((x1+x2)/2+1,x2,(y1+y2)/2+1,y2);
    }
    printf(")");
}
int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        input(i);
    }
    paper(1, n, 1, n);
}
