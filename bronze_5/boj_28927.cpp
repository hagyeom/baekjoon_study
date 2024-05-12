#include <iostream>

using namespace std;

int main()
{
    // 맥스의 영상 수 입력
    int t1, e1, f1;
    cin >> t1 >> e1 >> f1;

    // 멜의 영상 수 입력
    int t2, e2, f2;
    cin >> t2 >> e2 >> f2;

    // 각 미디어 타입별 시청 시간 계산
    int time_max = t1 * 3 + e1 * 20 + f1 * 120;
    int time_mel = t2 * 3 + e2 * 20 + f2 * 120;

    // 시청 시간 비교
    if (time_max > time_mel)
    {
        cout << "Max" << endl;
    }
    else if (time_max < time_mel)
    {
        cout << "Mel" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }

    return 0;
}