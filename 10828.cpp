#include <stdio.h>
#include <stack>
using namespace std;

stack<int> S;
int N, t;
char x[101];

int main()
{
    scanf("%d", &N);
    for(int I=1;I<=N;I++){
        x[0]='\0';
        scanf("%s", x);
        if(x[0]=='p'){
            if(x[1]=='u'){
                scanf("%d", &t);
                S.push(t);
                continue;
            }
            if(x[1]=='o'){
                if(S.empty()){
                    printf("-1\n");
                    continue;
                }
                printf("%d\n", S.top());
                S.pop();
                continue;
            }
        }
        if(x[0]=='e') printf("%d\n", S.empty());
        if(x[0]=='s') printf("%d\n", S.size());
        if(x[0]=='t'){
            if(S.empty()) printf("-1\n");
            else printf("%d\n", S.top());
        }
    }
}
