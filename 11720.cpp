#include <stdio.h>
int main()
{
    int n, k=0;
    char x[100];
    scanf("%d\n%s", &n, x);
    for(int i=0;i<n;i++)
    {
        k+=(x[i]-48);
    }
    printf("%d", k);
}
