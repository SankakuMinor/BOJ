#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0){
        cout<<"long int"<<endl;
        return 0;
    }
    n+=3;
    n/=4;
    for(int i=0;i<n;i++){
        cout<<"long ";
    }
    cout<<"int";
    return 0;
}
