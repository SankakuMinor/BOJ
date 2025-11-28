#include <cstdio>
int n, flag;

bool _confirm(int X)
{
    int cflag=0;
    while(X!=0){
        if(X%10==6) cflag++;
        else cflag=0;
        X/=10;
        if(cflag==3) break;
    }
    if(cflag==3) return true;
    else return false;
}

int main()
{
    scanf("%d", &n);
    flag=0;
    int x=666;
    while(flag!=n){
        if(_confirm(x))flag++;
        x++;

    }
    printf("%d", x-1);
    return 0;
}
