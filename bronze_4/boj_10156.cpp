// 백준 10156번: 과자
#include <iostream>

using namespace std;

int main()
{
    // k:과자 한 개의 가격.
    // n:사려고 하는 과자의 개수
    // m:현재 동수가 가진 돈
    int k, n, m;
    cin >> k >> n >> m;

    if (k * n - m > 0)
    {
        cout << k * n - m << "\n";
    }
    else if (k * n - m <= 0)
    {
        cout << "0" << "\n";
    }

    return 0;
}