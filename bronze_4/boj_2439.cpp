#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // 바깥쪽의 for 루프에서는 삼각형의 높이인 n에 따라 행을 반복
    {
        for (int j = n - 1; j > i; j--) // 공백 출력:(i=0을 기준으로) n - 1부터 시작하여 i까지 반복하여 공백을 출력
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++) // 별 출력: (i=0을 기준으로) 각 행에서는 현재 행 번호에 1을 더한 횟수만큼 별표를 출력
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}