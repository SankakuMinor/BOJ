#include <stdio.h>

int N, a[1001], dp_left[1001], dp_right[1001], answer;

int main()
{
    scanf("%d", &N);
    for(int i=1;i<=N;i++)
        scanf("%d", &a[i]);

    for(int i=1;i<=N;i++){
        if(i==1) dp_left[i]=1;
        else{
            int t=0;
            for(int j=1;j<=i-1;j++){
                if(a[j]<a[i]){
                    if(t<dp_left[j]) t=dp_left[j];
                }
            }
            dp_left[i]=t+1;
        }
    }
    for(int i=N;i>=1;i--){
        if(i==N) dp_right[i]=1;
        else{
            int t=0;
            for(int j=N;j>i;j--){
                if(a[j]<a[i]){
                    if(t<dp_right[j]) t=dp_right[j];
                }
            }
            dp_right[i]=t+1;
        }
    }

    for(int i=1;i<=N;i++){
        int mid=a[i];
        int count_left=0, count_right=0;
        for(int j=1;j<i;j++){
            if(a[j]<mid){
                if(count_left<dp_left[j])
                    count_left=dp_left[j];
            }
        }
        for(int j=N;j>i;j--){
            if(a[j]<mid){
                if(count_right<dp_right[j])
                    count_right=dp_right[j];
            }
        }
        if(answer<count_right+count_left+1)
            answer=count_right+count_left+1;
    }
    printf("%d", answer);
}
