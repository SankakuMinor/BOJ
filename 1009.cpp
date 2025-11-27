#include <iostream>
#include <vector>
using namespace std;

vector<int> v[10];

int main()
{
    int T;
    int a, b;

    v[1]={1};
    v[2]={2, 4, 8, 6};
    v[3]={3, 9, 7, 1};
    v[4]={4, 6};
    v[5]={5};
    v[6]={6};
    v[7]={7, 9, 3, 1};
    v[8]={8, 4, 2, 6};
    v[9]={9, 1};
    v[0]={10};

    cin>>T;


    for(int test=0;test<T;test++){
        cin>>a>>b;
        a%=10;
        b--;
        b%=v[a].size();
        cout<<v[a][b]<<endl;
    }
}
