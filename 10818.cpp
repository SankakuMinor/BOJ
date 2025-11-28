#include <cstdio>
#include <algorithm>
using namespace std;

int N, a[1000000];

int main()
{
    scanf("%d", &N);
    for(int i=1;i<=N;i++) scanf("%d", &a[i-1]);
    sort(a, a+N);
    printf("%d %d", a[0], a[N-1]);
}
