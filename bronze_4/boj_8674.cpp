#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    /*  1. 초콜릿의 한 쪽 변이 짝수거나 두 변 모두 짝수면 차이는 0입니다.
    2. 모두 홀수라면 가장 차이가 적게 나누면
    가로 세로 길이 중 더 짧은 길이의 변만큼의 개수가 나게 됩니다.*/
    if ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 0))
    {
        cout << "0" << endl;
    }
    else
    {
        cout << min(a, b);
    }

    return 0;
}