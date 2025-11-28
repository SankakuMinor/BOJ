#include <cstdio>
#include <algorithm>
using namespace std;

int N, M, a[101], i, j, k, ans;

int main()
{
  scanf("%d %d", &N, &M);
  for(i=0;i<N;i++) scanf("%d", &a[i]);
  sort(a,a+N);
  for(i=0;i<=N-3;i++){
    for(j=i+1;j<=N-2;j++){
      for(k=j+1;k<=N-1;k++){
        if(a[i]+a[j]+a[k]>M) break;
        if(a[i]+a[j]+a[k]<=M&&ans<a[i]+a[j]+a[k]){
          ans=a[i]+a[j]+a[k];
        }
      }
    }
  }
  printf("%d", ans);
}
