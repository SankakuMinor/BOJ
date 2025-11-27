#include <cstdio>
using namespace std;

void change(int* arr, int i, int j){
    int tmp, u;
    for(int t=i; t<=(i+j)/2;t++){
        u=i+j-t;
        tmp=arr[t];
        arr[t]=arr[u];
        arr[u]=tmp;
    }
    return;
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int i, j;
    int arr[101];
    for(int t=0;t<101;t++) arr[t]=t;

    for(int t=0;t<M;t++){
        scanf("%d %d", &i, &j);
        change(arr, i, j);
    }

    for(int t=1;t<=N;t++) printf("%d ", arr[t]);
    return 0;
}
