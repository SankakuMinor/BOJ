#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[3];
    for(int i=0;i<3;i++) scanf("%d", &a[i]);
    if(a[1]>a[2]) swap(a[1], a[2]);
    if(a[0]>a[1]) swap(a[0], a[1]);
    if(a[1]>a[2]) swap(a[1], a[2]);
    printf("%d", a[1]);
}
