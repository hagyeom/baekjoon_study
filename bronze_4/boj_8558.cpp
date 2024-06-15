#include <iostream>

using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
        result %= 10;
    }
    return result;
}
int main()
{
    int n, result;
    cin >> n;

    result = factorial(n);
    cout << result << endl;

    return 0;
}