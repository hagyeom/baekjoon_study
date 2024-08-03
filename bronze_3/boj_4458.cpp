// 백준 4458번: 첫 글자를 대문자로
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        s[0] = toupper(s[0]);
        cout << s << '\n';
    }

    return 0;
}