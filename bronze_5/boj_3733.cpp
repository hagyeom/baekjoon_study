#include <iostream>
using namespace std;

int main() {
    int N, S;

    // EOF까지 입력을 받음
    while (cin >> N >> S) {
        int x = S / (N + 1); // ACM 심사위원장도 포함하여 나누어야 하므로 N + 1로 나눔
        cout << x << endl; // 계산된 x의 값을 출력
    }

    return 0;
}
