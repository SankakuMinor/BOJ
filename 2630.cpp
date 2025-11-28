#include <stdio.h>

int blue=0, white=0;

int checkColor(int arr[128][128], int x, int y, int size){
    int flag=arr[x][y];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[x+i][y+j]!=flag) return -1;
        }
    }
    return flag;
}

void _func(int arr[128][128], int x, int y, int size){
    int answer=checkColor(arr, x, y, size);
    if(answer==-1){
        _func(arr, x, y, size/2);
        _func(arr, x+size/2, y, size/2);
        _func(arr, x, y+size/2, size/2);
        _func(arr, x+size/2, y+size/2, size/2);
        return;
    }
    if(answer==0) white++;
    if(answer==1) blue++;
    return;
}

int main()
{
    int size;
    int arr[128][128];

    scanf("%d", &size);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    _func(arr, 0, 0, size);
    printf("%d\n%d", white, blue);
    return 0;

}
