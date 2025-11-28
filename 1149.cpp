#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int len = 0;
    int house_cost[1000][3];
    int result[1000][3];
 
    // 비용 데이터 입력 및 저장
    scanf("%d", &len);
    for (int idx = 0; idx < len; idx++) {
        int r, g, b;
        scanf("%d %d %d", &r, &g, &b);
        house_cost[idx][0] = r;
        house_cost[idx][1] = g;
        house_cost[idx][2] = b;
    }
 
    // 첫 인덱스에 누적 비용 세팅
    result[0][0] = house_cost[0][0];
    result[0][1] = house_cost[0][1];
    result[0][2] = house_cost[0][2];
 
 
    // 문제 해결 : 누적 비용 계산
    for (int idx = 1; idx < len; idx++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (col == 0) { // 현재 집에서 R을 선택한다면.. 누적 값은? 
                result[idx][col] = house_cost[idx][col] + min(result[idx - 1][1], result[idx - 1][2]);
            }
            else if (col == 1) { // 현재 집에서 G를 선택한다면.. 누적 값은? 
                result[idx][col] = house_cost[idx][col] + min(result[idx - 1][0], result[idx - 1][2]);
            }
            else if (col == 2) { // 현재 집에서 B를 선택한다면.. 누적 값은? 
                result[idx][col] = house_cost[idx][col] + min(result[idx - 1][0], result[idx - 1][1]);
            }
        }
    }
 
    // 결과 출력 : 최소 값 출력
    int answer = result[len - 1][0] < result[len - 1][1] ? min(result[len - 1][0], result[len - 1][2]) : min(result[len - 1][1], result[len - 1][2]);
    printf("%d\n", answer);
 
    return 0;
}
