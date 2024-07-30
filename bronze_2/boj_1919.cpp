#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;
    vector<int> count1(26);
    vector<int> count2(26);
    for (auto a : s1)
    {
        count1[a - 'a']++;
    }
    for (auto a : s2)
    {
        count2[a - 'a']++;
    }
    int result = 0;
    for (int i = 0; i < 26; i++)
    {
        result += abs(count1[i] - count2[i]);
    }
    cout << result << '\n';

    return 0;
}