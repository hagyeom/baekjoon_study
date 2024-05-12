#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // 1부터 N까지의 합을 계산
    int sum = 0;
    for (int i = 1; i <= N; ++i)
    {
        sum += i;
    }

    // 1부터 N까지의 합의 제곱을 계산
    int sum_squared = sum * sum;

    // 1부터 N까지의 세제곱의 합을 계산
    int sum_cubed = 0;
    for (int i = 1; i <= N; ++i)
    {
        sum_cubed += i * i * i;
    }

    // 결과를 출력
    cout << sum << "\n";
    cout << sum_squared << "\n";
    cout << sum_cubed;
    return 0;
}