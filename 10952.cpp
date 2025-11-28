#include <cstdio>
int t1, t2;

int main()
{
    while(1){
        scanf("%d %d", &t1, &t2);
        if(t1==0&&t2==0) break;
        printf("%d\n", t1+t2);
    }
}
