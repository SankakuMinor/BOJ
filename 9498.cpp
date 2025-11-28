#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a>=90) printf("A");
    if(89>=a&&a>=80) printf("B");
    if(79>=a&&a>=70) printf("C");
    if(69>=a&&a>=60) printf("D");
    if(59>=a) printf("F");
}
