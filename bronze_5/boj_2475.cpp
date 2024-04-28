#include <iostream>
using namespace std;

int main()
{
    int x;
    int ans = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        ans += x * x;
    }

    ans %= 10;

    cout << ans;

    return 0;
}