#include <cstdio>
#define MAX(A, B) A>B?A:B
int t, ans, num=1;

int main()
{
    for(int i=1;i<=9;i++){
        scanf("%d", &t);
        if(t>ans){
            ans=t;
            num=i;
        }
    }
    printf("%d\n%d", ans, num);
}
