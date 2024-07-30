#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int v;
    cin >> v;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == v)
        {
            count++;
        }
    }
    cout << count << '\n';

    return 0;
}