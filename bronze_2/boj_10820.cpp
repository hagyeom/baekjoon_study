// 백준 10820번: 문자열 분석
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (string s; getline(cin, s);)
    {
        int cnt[4]{};
        for (auto &i : s)
        {
            if (islower(i))
            {
                cnt[0]++;
            }
            else if (isupper(i))
            {
                cnt[1]++;
            }
            else if (isdigit(i))
            {
                cnt[2]++;
            }
            else
            {
                cnt[3]++;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            cout << cnt[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}