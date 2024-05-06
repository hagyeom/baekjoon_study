#include <iostream>
using namespace std;

int main()
{
    int R, S, ans;
    cin >> R >> S;
    ans = R * 8 + S * 3 - 28;
    if (ans < 0)
    {
        ans = 0;
    }
    cout << ans;
}