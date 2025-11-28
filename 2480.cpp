#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(a==b&&b==c) cout<<10000+a*1000<<endl;
    else if(a==b) cout<<1000+a*100<<endl;
    else if(b==c||c==a) cout<<1000+c*100<<endl;
    else{
        int Max=0;
        Max=Max>a?Max:a;
        Max=Max>b?Max:b;
        Max=Max>c?Max:c;
        cout<<Max*100<<endl;
    }
}
