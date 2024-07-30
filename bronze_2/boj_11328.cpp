#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        vector<int> count(26);
        for (auto a : s1)
        {
            count[a - 'a']++;
        }
        for (auto a : s2)
        {
            count[a - 'a']--;
        }
        bool isPossible = true;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                isPossible = false;
            }
        }
        if (isPossible == true)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }

    return 0;
}