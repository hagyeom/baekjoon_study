#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1, n2, n12;
    cin >> n1 >> n2 >> n12;

    int N = floor((n1 + 1) * (n2 + 1) / (n12 + 1)) - 1;
    // floor() 함수는 주어진 실수를 내림하여 그보다 작거나 같은 가장 가까운 정수로 반환
    cout << N;

    return 0;
}