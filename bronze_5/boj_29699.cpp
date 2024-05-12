#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 문자열의 길이는 14이므로
    // N번째 문자를 찾기 위해서는
    // N을 14로 나눈 나머지를 이용
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    string pattern = "WelcomeToSMUPC";

    cout << pattern[(N - 1) % 14];

    return 0;
}