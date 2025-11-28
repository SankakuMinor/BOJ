#include<cstdio>
double a[11111];
double D[11111];
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i)
        scanf("%lf", &a[i]);
 
    double MAX = 0;
    for (int i = 1; i <= N; ++i)
    {
        D[i]=(1>D[i-1]?1:D[i-1])*a[i];;
        if (D[i] > MAX)
            MAX = D[i];
    }
    printf("%0.3lf ", MAX);
 
    return 0;
}
