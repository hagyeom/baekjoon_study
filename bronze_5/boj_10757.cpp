#include <iostream>
#include <string>
#include <algorithm> // reverse 함수를 사용하기 위함
using namespace std;

// 문자열로 표현된 두 큰 수를 더하는 함수
string addLargeNumbers(string a, string b) {
    string result = ""; // 결과를 저장할 변수
    int carry = 0; // 자리 올림수를 저장할 변수

    // 두 수의 길이가 다를 수 있으므로, 길이를 맞추기 위해 짧은 수 앞을 0으로 채웁니다.
    while (a.length() < b.length()) a = "0" + a;
    while (b.length() < a.length()) b = "0" + b;

    // 두 수를 끝자리부터 더해나갑니다.
    for (int i = a.length() - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry; // 두 수와 자리 올림수를 더함
        carry = sum / 10; // 다음 자리로 넘어갈 올림수 계산
        result += (sum % 10) + '0'; // 현재 자리수를 결과에 추가
    }

    // 마지막으로 올림수가 남아있다면 결과에 추가
    if (carry) result += carry + '0';

    // 결과가 역순으로 계산되었으므로 뒤집어줍니다.
    reverse(result.begin(), result.end());

    // 결과 반환
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string A, B;
    cin >> A >> B; // 큰 수를 문자열로 입력 받음

    // 두 큰 수를 더한 결과를 출력
    cout << addLargeNumbers(A, B) << endl;

    return 0;
}
