#include <iostream>
using namespace std;

int main()
{
    int sum, diff;
    cin >> sum >> diff;

    // 두 팀의 점수를 계산한다.
    // a=(sum+diff)/2
    // b=sum-a
    // a와 b는 양의 정수여야 하며, a는 b보다 크거나 같아야 한다.
    int a = (sum + diff) / 2;
    int b = sum - a;
    // 계산된 점수가 유효한지 확인한다. (음수가 아니며, 합과 차가 일치해야 함)
    // 또한 합과 차를 이용해 계산한 A, B가 정수인지 확인한다. (sum + diff)와 (sum - diff)가 모두 짝수여야 함.
    if (a >= 0 && b >= 0 && a - b == diff && (sum + diff) % 2 == 0 && (sum - diff) % 2 == 0)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << -1;
    }

    return 0;
}