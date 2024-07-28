#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        string s;
        getline(cin, s);
        stringstream in(s);
        int n, sum = 0;
        while (in >> n)
        {
            sum += n;
        }
        cout << sum << '\n';
    }

    return 0;
}