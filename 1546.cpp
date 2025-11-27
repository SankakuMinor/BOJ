#include <cstdio>
using namespace std;

int main(){
    int N;
    float M, scoresum=0, maxscore=0;
    scanf("%d", &N);

    for(int size=0; size<N; size++){
        scanf("%f", &M);
        scoresum+=M;
        maxscore=maxscore>M?maxscore:M;
    }

    printf("%f", scoresum/maxscore*100/N);
}
