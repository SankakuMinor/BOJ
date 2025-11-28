#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T;
int N, K;
int W;
int A;
int time[100001];
long long int dp[100001];
int d1, d2;
bool check[100001];

vector<int> n[100001];

void clear(int x){
    for(int o=1;o<=x;o++){
        time[o]=0;
        dp[o]=0;
        check[o]=0;
        n[o].clear();
    }
    return;
}

long long int _f(int x){
    if(check[x]) return dp[x];
    check[x]=1;

    if(n[x].empty()){
        dp[x]=time[x];
        return dp[x];
    }
    long long int sum_time=-1;
    for(int i=0;i<n[x].size();i++){
        if (sum_time==-1){
            sum_time=_f(n[x][i]);
            continue;
        }
        sum_time=max(sum_time, _f(n[x][i]));
    }
    dp[x]=sum_time+time[x];
    return dp[x];
}

int main()
{
    cin>>T;

    for(int testcase=0;testcase<T;testcase++){

        cin>>N>>K;
        for(int i=1;i<=N;i++) cin>>time[i];
        for(int i=1;i<=K;i++){
            cin>>d1>>d2;
            n[d2].push_back(d1);
        }
        cin>>A;

        cout<<_f(A)<<endl;

        clear(N);
    }
}
