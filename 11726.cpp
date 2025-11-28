#include <stdio.h>
int n, a[1001];
int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i<=2) a[i]=i;
        else
        a[i]=(a[i-1]+a[i-2])%10007;
    }
    printf("%d", a[n]);
}
