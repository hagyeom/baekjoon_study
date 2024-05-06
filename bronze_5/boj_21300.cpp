#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> bottles(6); // 각 빈 병의 종류별 수를 저장할 vector

    // 빈 병의 종류별 수 입력 받기
    for (int i = 0; i < 6; ++i)
    {
        cin >> bottles[i];
    }

    // 뉴욕 주의 보증금 계산
    int total_refund = 0;
    for (int count : bottles)
    {
        total_refund += count * 5;
    }

    // 총 환급 보증금 출력
    cout << total_refund;

    return 0;
}
