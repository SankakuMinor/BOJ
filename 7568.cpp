#include <cstdio>
int N, i, j, cnt;
struct person{
  int h, w;
};
person P[51];

int main()
{
  scanf("%d", &N);
  for(i=1;i<=N;i++){
    scanf("%d %d", &P[i].w, &P[i].h);
  }
  for(i=1;i<=N;i++){
    cnt=1;
    for(j=1;j<=N;j++){
      if(j==i) continue;
      if(P[j].h>P[i].h&&P[j].w>P[i].w){ cnt++; continue;}
    
    }
    printf("%d ", cnt);
  }
}
