#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int days = n % 5;  // 5일마다 초기화되므로 5로 나눈 나머지를 구함
    int weeks = n / 5; // 5일마다 V가 하나씩 추가되므로 5로 나눈 몫을 구함

    for (int i = 0; i < weeks; i++)
    {
        cout << "V"; // 주마다 V를 추가
    }
    for (int i = 0; i < days; i++)
    {
        cout << "I"; // 남은 일수만큼 I를 추가
    }

    return 0;
}