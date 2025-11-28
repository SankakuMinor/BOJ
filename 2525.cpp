#include <iostream>
using namespace std;

int main()
{
    int h, m, p;
    cin>>h>>m;
    cin>>p;
    m+=p;
    while (m>=60){
        m-=60;
        h+=1;
    }
    while (h>=24) h-=24;
    cout<<h<<" "<<m;
}
