#include <cstdio>
#include <algorithm>
using namespace std;
int N, A[500001], i, t, M;


int main()
{
    scanf("%d", &N);
    for(i=0;i<N;i++) scanf("%d", &A[i]);
    sort(A, A+N);
    scanf("%d", &M);
    for(i=0;i<M;i++){
        scanf("%d", &t);
        printf("%d ", binary_search(A, A+N, t));
    }
}
