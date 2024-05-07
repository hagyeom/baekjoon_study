#include <iostream>

using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;

    int start_minute = 9 * 60;   // 9시를 분 단위로 변환
    int end_minute = H * 60 + M; // 입력된 시간을 분 단위로 변환

    int time_taken = end_minute - start_minute; // 걸린 시간 계산

    cout << time_taken;

    return 0;
}