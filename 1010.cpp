#include <iostream>
using namespace std;

int T;
int a, b;

int main()
{
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>a>>b;
        long long int ans=1;
        for(int j=1;j<=a;j++){
            ans*=b;
            ans/=j;
            b--;
        }
        cout<<ans<<endl;
    }
}
