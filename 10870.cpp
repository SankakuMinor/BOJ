#include <stdio.h>
long long int d[93]={};
long long int f(int k)
{
    if(k<3) return 1;
    if(d[k]==0) d[k]=f(k-1)+f(k-2);
    return d[k];
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n==0) printf("%d", n);
    else printf("%lld",f(n));

}
