#include <iostream>
#include <string>
#include <algorithm> // reverse 함수를 사용하기 위해 포함

using namespace std;

// 두 문자열로 표현된 큰 수의 합을 계산하는 함수
string addBigNumbers(string a, string b)
{
    string result = ""; // 결과를 저장할 문자열
    int carry = 0;      // 올림수

    // a와 b의 길이가 다를 수 있으므로, 두 문자열의 길이를 같게 만들어줍니다.
    while (a.length() < b.length())
        a = "0" + a;
    while (b.length() < a.length())
        b = "0" + b;

    // 두 문자열의 끝에서부터 시작하여 각 자리수를 더합니다.
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int sum = (a[i] - '0') + (b[i] - '0') + carry; // 현재 자리수와 올림수를 더합니다.
        carry = sum / 10;                              // 다음 자리수로 넘길 올림수를 계산합니다.
        result += (sum % 10) + '0';                    // 현재 자리수의 결과를 결과 문자열에 추가합니다.
    }

    if (carry > 0)
        result += carry + '0'; // 마지막으로 남은 올림수가 있다면 결과 문자열에 추가합니다.

    // 결과 문자열을 뒤집어서 올바른 순서로 만듭니다.
    reverse(result.begin(), result.end());

    return result;
}

int main()
{

    string a, b;
    // 두 큰 수를 입력받습니다.
    cin >> a >> b;

    // 두 수의 합을 계산하고 결과를 출력합니다.
    cout << addBigNumbers(a, b) << endl;

    return 0;
}
