#include <cstdio>

int n;
char a, b, c;

void _f(int x, int a, int b, int c){
    if(x==1){
        printf("%d %d\n", a, c);
        return;
    }
    _f(x-1, a, c, b);
    printf("%d %d\n", a, c);
    _f(x-1, b, a, c);
    return;
}

int main()
{
    scanf("%d", &n);
    printf("%d\n", (1<<n)-1);
    _f(n, 1, 2, 3);
}

