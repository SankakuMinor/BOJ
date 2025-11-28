#include <stdio.h>
long long int n, d[91];
long long int fibonacci(int x){
    if(x<=2) return 1;
    if(d[x]!=0) return d[x];
    return d[x]=fibonacci(x-1)+fibonacci(x-2);
}
int main(){
    scanf("%d", &n);
    printf("%lld", fibonacci(n));
}
