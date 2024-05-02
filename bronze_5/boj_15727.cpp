#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;

    // 성우가 최대한 빨리 민건이를 찾기 위해 필요한 시간 t를 계산한다.
    // 성우는 1분에 1에서 5까지의 거리를 이동할 수 있으므로,
    // 거리 L을 5로 나누어 최소 이동 필요 분을 구하고,
    // 나머지가 있다면 (즉, 완전히 나누어 떨어지지 않는다면) 1분을 추가해야 한다.
    int t = L / 5;
    if (L % 5 > 0) {
        t += 1;
    }

    // 계산한 시간 t를 출력한다.
    cout << t << endl;

    return 0;
}
