#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;

    // 필요한 일수 계산
    int daysForKorean = ceil((double)A / C); // ceil 함수는 주어진 숫자를 올림하여 가장 가까운 정수를 반환
    int daysForMath = ceil((double)B / D);

    // 숙제를 끝내는 데 걸리는 최대 일수
    int maxDaysRequired = max(daysForKorean, daysForMath); // max 함수는 두 값 중에서 더 큰 값을 반환

    // 놀 수 있는 날의 최대 수
    int maxDaysToPlay = L - maxDaysRequired;

    cout << maxDaysToPlay << endl;

    return 0;
}