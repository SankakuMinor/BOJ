#include <iostream>
using namespace std;
int main()
{
    int n, o=1; cin>>n;
    for(int i=1;i<=n;i++){
        o*=i;
    }
    cout<<o;
}
