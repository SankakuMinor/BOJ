#include <iostream>
#include <stack>
using namespace std;

stack<int> S;
int N;
int A[1001];
int dp[1001];
int v[1001]={-1, -1};


int main()
{
    cin>>N;

    for(int i=1;i<=N;i++) cin>>A[i];

    for(int i=1;i<=N;i++){
        
        if(i==1){
            dp[1]=1;
            continue;
        }

        int max_length=0;
        dp[i]=0;
        int saveVector=-1;


        for(int j=1;j<i;j++){
            if(max_length<=dp[j]){
                if(A[j]<A[i]){
                    saveVector=j;
                    max_length=dp[j];
                }
            }    
        }
        dp[i]=max_length+1;
        v[i]=saveVector;
    }    

    int answer=1, anslen=1;

    for(int i=1;i<=N;i++){
        if(anslen<dp[i]){
            anslen=dp[i];
            answer=i;
        }
    }

    while(v[answer]!=-1){
        S.push(answer);
        answer=v[answer];
    }

    S.push(answer);



    cout<<anslen<<endl;
    while(!S.empty()){
        cout<<A[S.top()]<<" ";
        S.pop();
    }

    return 0;
}
