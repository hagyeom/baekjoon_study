// 백준 1357번: 뒤집힌 덧셈
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string x, y;
    cin >> x >> y;
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    string ans = to_string(stoi(x) + stoi(y));
    while (ans.size() && ans.back() == '0')
    {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
    return 0;
}