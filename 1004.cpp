#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int T;
    int x1, x2, y1, y2, cx, cy, r;
    int n;
    int cnt, dis1, dis2;
    bool check1, check2;

    cin>>T;

    for(int i=0;i<T;i++){
        cnt=0;

        cin>>x1>>y1>>x2>>y2;
        cin>>n;

        for(int j=0;j<n;j++){
            cin>>cx>>cy>>r;

            dis1=sqrt((x1-cx)*(x1-cx)+(y1-cy)*(y1-cy));
            dis2=sqrt((x2-cx)*(x2-cx)+(y2-cy)*(y2-cy));

            check1=dis1<r;
            check2=dis2<r;

            if(check1!=check2) cnt++;
        }
        cout<<cnt<<endl;
    }
}
