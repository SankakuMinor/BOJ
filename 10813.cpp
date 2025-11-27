#include <cstdio>
using namespace std;

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int i, j, tmp;
    int arr[101];
    for(int x=0;x<101; x++) arr[x]=x;

    for(int x=0; x<M; x++){
        scanf("%d %d", &i, &j);
        tmp=arr[i]; arr[i]=arr[j]; arr[j]=tmp;
    }

    for(int x=1; x<=N; x++) printf("%d ", arr[x]);
    return 0;
}
