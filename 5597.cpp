#include <cstdio>
using namespace std;

int main(){
    bool arr[31]={};
    int t;
    for(int i=0;i<28;i++){
        scanf("%d", &t);
        arr[t]=1;
    }
    for(int i=1;i<=30;i++) if(arr[i]==0) printf("%d\n", i);
    return 0;
}
