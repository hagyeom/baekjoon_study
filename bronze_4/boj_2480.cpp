#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // 같은 눈이 세 개 나오면
    if (a == b && b == c)
    {
        cout << 10000 + a * 1000;
    }
    // 같은 눈이 두 개만 나오면
    else if ((a == b && b != c) || (a == c && a != b))
    {
        cout << 1000 + a * 100;
    }
    else if (b == c && b != a)
    {
        cout << 1000 + b * 100;
    }
    // 모두 다른 눈이 나오면
    else if (a != b && a != c)
    {
        if (a > b && a > c)
        { // a가 가장 큰 경우
            cout << a * 100;
        }
        else if (b > a && b > c)
        { // b가 가장 큰 경우
            cout << b * 100;
        }
        else if (c > a && c > b)
        { // c가 가장 큰 경우
            cout << c * 100;
        }
    }
    return 0;
}