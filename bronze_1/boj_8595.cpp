#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, sum = 0;
    string s;
    cin >> n >> s;
    for (auto &i : s)
    {
        if (!isdigit(i))
        {
            i = ' ';
        }
    }
    stringstream in(s);
    while (in >> n)
    {
        sum += n;
    }
    cout << sum << '\n';

    return 0;
}