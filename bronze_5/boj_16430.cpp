#include <iostream>
#include <cmath>
using namespace std;

// 최대공약수 계산 함수
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return abs(a); // abs() 함수는 "절댓값"을 계산하는 함수
}

int main()
{
    int A, B;
    cin >> A >> B;

    // 훔친 무게를 계산
    int stolen_weight = B - A;

    // 최대공약수 계산
    int common_divisor = gcd(stolen_weight, B);

    // 기약분수로 표현하기 위해 훔친 무게와 총 무게를 최대공약수로 나눔
    int numerator = stolen_weight / common_divisor;
    int denominator = B / common_divisor;

    cout << numerator << " " << denominator;

    return 0;
}