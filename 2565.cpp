#include <cstdio>
#include <algorithm>
using namespace std;

struct LINE{
    int s, e;
};
LINE arr_line[101];


int arr_DP[101];

int N, i, j, ans, flag;


bool _compare(LINE a, LINE b){
    return a.s<b.s;
}

int main()
{
    scanf("%d", &N);
    for(i=1;i<=N;i++) scanf("%d %d", &arr_line[i].s, &arr_line[i].e);
    sort(arr_line+1, arr_line+N+1, _compare);

    for(i=1;i<=N;i++){
        flag=0;
        for(j=1;j<i;j++)
            if(arr_line[j].e<arr_line[i].e) flag=max(arr_DP[j], flag);
        arr_DP[i]=flag+1;
        ans=max(arr_DP[i], ans);
    }
    printf("%d", N-ans);
}
