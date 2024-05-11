#include <iostream>
using namespace std;

unsigned long long factorial(int n)
{
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}