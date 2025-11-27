#include <iostream>
#include <stack>
using namespace std;

int T;
int M, N, K;
int arr[51][51];
int x, y;
stack<int> S;

void reset(){
    for(int i=0;i<51;i++)
        for(int j=0;j<51;j++)
            arr[i][j]=0;
    return;
}



int main()
{
    cin>>T;
    for(int testcase=0;testcase<T;testcase++){
        cin>>M>>N>>K;
        for(int i=0;i<K;i++){
            cin>>x>>y;
            arr[x][y]=1;
        }

        int cnt=0;

        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(arr[i][j]==0) continue;
                if(arr[i][j]==1){
                    S.push(j);
                    S.push(i);
                }

                int a, b;
                while(!S.empty()){
                    a=S.top();
                    S.pop();
                    b=S.top();
                    S.pop();
                    arr[a][b]=0;
                    if(a>0&&arr[a-1][b]==1){
                        S.push(b);
                        S.push(a-1);
                    }
                    if(b>0&&arr[a][b-1]==1){
                        S.push(b-1);
                        S.push(a);
                    }
                    if(a<M-1&&arr[a+1][b]==1){
                        S.push(b);
                        S.push(a+1);
                    }
                    if(b<N-1&&arr[a][b+1]==1){
                        S.push(b+1);
                        S.push(a);
                    }
                }
                cnt++;
            }
        }
        cout<<cnt<<endl;
        reset();
    }
}
