#include <iostream>
using namespace std;

int main()
{
    int ans, cnt;
    cin>>ans;
    cin>>cnt;
    int a, b;
    for(int i=0;i<cnt;i++){
        cin>>a>>b;
        ans-=a*b;
    }
    if(ans==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
