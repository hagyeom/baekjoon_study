// 백준 10808번: 알파벳 개수
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    vector<int> count(26);
    for (auto a : s)
    {
        count[a - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << count[i] << ' ';
    }
    cout << '\n';

    return 0;
}