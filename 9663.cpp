#include <cstdio>
int N, ans;
bool check_left[30], check_right[30], check_vertical[16];

void _input(){
    scanf("%d", &N);
    return;
}

void _swift(int a, int b){
    check_left[a+b-1]=!check_left[a+b-1];
    check_right[a+(N-b+1)-1]=!check_right[a+(N-b+1)-1];
    check_vertical[b]=!check_vertical[b];
}

void _Queen(int i, int j){
    if(check_left[i+j-1]||check_right[i+(N-j+1)-1]) return;
    if(check_vertical[j]) return;
    if(i==N){
        ans++;
        return;
    }
    _swift(i, j);
    for(int x=1;x<=N;x++) _Queen(i+1, x);
    _swift(i, j);
    return;
}
int main()
{
    _input();
    for(int S=1;S<=N;S++) _Queen(1, S);
    printf("%d", ans);
}
