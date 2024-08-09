// 백준 28278번: 스택 2 (C++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, num, cmd;
    cin >> t;
    stack<int> stk;
    while (t--)
    {
        cin >> cmd;
        switch (cmd)
        {
        case 1:
            cin >> num;
            stk.push(num);
            break;
        case 2:
            if (!stk.empty())
            {
                cout << stk.top() << '\n';
                stk.pop();
            }
            else
            {
                cout << "-1\n";
            }
            break;
        case 3:
            cout << stk.size() << '\n';
            break;
        case 4:
            if (stk.empty())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
            break;
        case 5:
            if (!stk.empty())
            {
                cout << stk.top() << '\n';
            }
            else
            {
                cout << "-1\n";
            }
            break;
        }
    }
    return 0;
}