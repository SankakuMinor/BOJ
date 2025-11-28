#include <cstdio>
int N, i, cnt, flag;
int ans(int x){
  cnt=x;
  while(x!=0){
    cnt+=x%10;
    x/=10;
  }
  return cnt;
}
int main()
{
  scanf("%d", &N);
  for(i=1;i<=N-1;i++){
    if(ans(i)==N){
      printf("%d", i);
      flag=1;
      break;
    }
  }
  if(flag==0) printf("0");
}
