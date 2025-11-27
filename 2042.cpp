/*

Segment tree first problem

*/

#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

ll arr[20000001];
int N, M, K;
int keyBinary;

void changeSegmentTree(int x)
{
    while(x>=1){
        arr[x] = arr[x * 2] + arr[x * 2 + 1];
        x/=2;
    }
    return;
}

ll printSegmentTree(int x, int l, int r, int rangeL, int rangeR, int length)
{
    if (rangeR < l || r < rangeL)
        return 0;
    
    if (l <= rangeL && rangeR <= r)
        return arr[x];

    if (length == 1)
        return 0;

    return printSegmentTree(x * 2, l, r, rangeL, rangeL + length / 2 - 1, length / 2) + printSegmentTree(x * 2 + 1, l, r, rangeL + length / 2, rangeR, length / 2);
}

int main()
{
    cin >> N >> M >> K;

    keyBinary = 1;
    while (keyBinary < N)
        keyBinary *= 2;

    for (int i = keyBinary; i <= keyBinary + N - 1; i++)
        cin >> arr[i];

    for (int i = keyBinary - 1; i >= 1; i--)
        arr[i] = arr[i * 2] + arr[i * 2 + 1];

    ll a, b, c;

    for (int i = 1; i <= M + K; i++)
    {
        cin >> a >> b >> c;
        if (a == 1)
        {
            arr[b + keyBinary - 1] = c;
            changeSegmentTree((b + keyBinary - 1) / 2);
        }

        if (a == 2)
            cout << printSegmentTree(1, b, c, 1, N, keyBinary) << endl;
    }

    return 0;
}
