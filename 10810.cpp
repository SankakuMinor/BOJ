#include <cstdio>
using namespace std;

int main(){
    int N, M; // 1<=N<=100, 1<=M<=100
    int i, j, k;
    int arr[101]={};
    
    scanf("%d %d", &N, &M);
    
    for(int tmp=0;tmp<M;tmp++){
        scanf("%d %d %d", &i, &j, &k);
        for(int tmp2=i; tmp2<=j;tmp2++) arr[tmp2]=k;
    }

    for(int tmp=1;tmp<=N;tmp++) printf("%d ", arr[tmp]);
    return 0;
}
