#include <stdio.h>
long long int zero[91], one[91], N;
int main()
{
    scanf("%lld", &N);
    zero[1]=0, one[1]=1;
    zero[2]=1, one[2]=0;
    zero[3]=1, one[3]=1;

    if(N<=3)
        printf("%lld", zero[N]+one[N]);
    else{
        for(int i=4;i<=N;i++){
            zero[i]=one[i-1];
            one[i]=zero[i-1]+one[i-1];
        }
        printf("%lld", zero[N]+one[N]);
    }
}
