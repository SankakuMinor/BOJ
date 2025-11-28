#include <cstdio>
#include <algorithm>
using namespace std;
int N, A[100001], i, M, t;

int main()
{
    scanf("%d", &N);
    for(i=0;i<N;i++) scanf("%d", &A[i]);
    sort(A, A+N);
    scanf("%d", &M);
    for(i=1;i<=M;i++){
        scanf("%d", &t);
        printf("%d\n", binary_search(A, A+N, t));
    }

}
