#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int mul = a * b * c;
    string mulStr = to_string(mul);
    vector<int> count(10);
    for (auto i : mulStr)
    {
        count[i - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << count[i] << '\n';
    }

    return 0;
}