#include <iostream>
#include <string>
using namespace std;
/*
큰 수를 문자열로 입력받아, 
각 자리수를 순회하며 현재까지의 나머지에 10을 곱한 후 
현재 자리수를 더하고, 이를 다시 나눗수로 나누어 
나머지를 업데이트하는 방식으로 작동. 
최종적으로 나눗셈의 나머지를 반환
*/

// 문자열로 표현된 큰 수를 나눗셈하는 함수
int divideRemainder(string number, int divisor) {
    int remainder = 0;
    for (int i = 0; i < number.length(); i++) {
        remainder = (remainder * 10 + (number[i] - '0')) % divisor;
    }
    return remainder;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    cin >> N; // 제연이가 가장 좋아하는 큰 수를 입력받음

    // 20000303으로 나눈 나머지를 구함
    int result = divideRemainder(N, 20000303);
    cout << result << endl; // 결과 출력

    return 0;
}
