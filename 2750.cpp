#include <cstdio>
#include <algorithm>
using namespace std;
int N, A[1001], i;


int main()
{
    scanf("%d", &N);
    for(i=0;i<N;i++) scanf("%d", &A[i]);
    sort(A, A+N);
    for(i=0;i<N;i++) printf("%d\n", A[i]);
}
