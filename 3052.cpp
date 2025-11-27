#include <cstdio>
using namespace std;

int main(){
    bool arr[42]={};
    int t;
    for(int i=0;i<10;i++){
        scanf("%d", &t);
        arr[t%42]=1;
    }

    int cnt=0;
    for(int i=0;i<42;i++) if(arr[i]==1) cnt++;

    printf("%d", cnt);
    return 0;
}
