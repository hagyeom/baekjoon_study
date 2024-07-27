#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        while (cin >> n)
        {
            sum += n;
            if (cin.peek() == '\n' || cin.peek() == EOF)
            {
                break;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}