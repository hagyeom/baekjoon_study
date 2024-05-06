#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    char a[50000], b[50000];
    cin >> a >> b;

    int result[100000];

    for (int i = 0; i < m; i++) // 바깥쪽 반복문은 두 번째 숫자의 각 자리수
    {
        for (int j = 0; j < n; j++) // 안쪽 반복문은 첫 번째 숫자의 각 자리수
        {                           // 문자에서 '0'을 빼면 숫자와 동일
            int temp = (a[n - 1 - j] - '0') * (b[m - 1 - i] - '0');
            // 각 자리수끼리 곱한 결과를 result 배열에 더해줌
            result[n + m - 1 - i - j] += temp;
        }
    }

    for (int i = n + m - 1; i > 0; i--) // 각 자리의 수가 10을 초과하는 경우 올림을 처리
    {
        result[i - 1] += result[i] / 10;
        result[i] %= 10;
    }

    bool flag = false;
    // 곱셈 결과의 첫 자리부터 순서대로 출력
    // 이때 결과에서 앞부분의 0을 제거하고 출력
    for (int i = 0; i < n + m; i++)
    {
        if (!flag)
        {
            if (result[i] != 0)
                flag = true;
            else if (i == n + m - 1)
                cout << "0";
        }
        if (flag)
            cout << result[i];
    }
    return 0;
}