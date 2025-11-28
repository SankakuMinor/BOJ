#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int T;
    float x1, x2, r1, r2, y1, y2;

    cin>>T;
    for(int test=0;test<T;test++){
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        float dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

        if(x1==x2&&y1==y2&&r1==r2){
            cout<<-1<<endl;
            continue;
        }
        
        if(dis>r1+r2){
            cout<<0<<endl;
            continue;
        }
        if(dis==r1+r2){
            cout<<1<<endl;
            continue;
        }
        if(dis+r1<r2||dis+r2<r1){
             cout<<0<<endl;
             continue;
        }
        if(dis+r1==r2||dis+r2==r1){
            cout<<1<<endl;
            continue;
        }
        cout<<2<<endl;
    }
    return 0;
}
