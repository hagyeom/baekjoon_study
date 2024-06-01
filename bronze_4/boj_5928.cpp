#include <iostream>

using namespace std;

int main()
{
    int d, h, m;
    cin >> d >> h >> m;

    // 시작시간: 2011년 11월 11일
    int startDay = 11;
    int startHour = 11;
    int startMinute = 11;

    // 종료시간: 입력으로 주어진 시간
    int endDay = d;
    int endHour = h;
    int endMinute = m;

    // 시작 시점을 분 단위로 계산
    int startTotalMinute = (startDay * 24 * 60) + (startHour * 60) + startMinute;
    // 종료 시점을 분 단위로 계산
    int endTotalMinute = (endDay * 24 * 60) + (endHour * 60) + endMinute;
    // 경과 시간을 계산
    int elapsedMinutes = endTotalMinute - startTotalMinute;

    // 만약 종료 시간이 시작 시간보다 빠르다면 -1 출력
    if (elapsedMinutes < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << elapsedMinutes << endl;
    }

    return 0;
}