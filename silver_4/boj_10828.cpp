// 백준 10828번: 스택 (C++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    stack<int> stk;
    int num;
    string cmd;
    for (int i = 0; i < n; i++)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            cin >> num;
            stk.push(num);
        }
        if (cmd == "pop")
        {
            if (!stk.empty())
            {
                cout << stk.top() << '\n';
                stk.pop();
            }
            else
            {
                cout << "-1\n";
            }
        }
        if (cmd == "size")
        {
            cout << stk.size() << '\n';
        }
        if (cmd == "empty")
        {
            if (stk.empty())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        if (cmd == "top")
        {
            if (!stk.empty())
            {
                cout << stk.top() << '\n';
            }
            else
            {
                cout << "-1\n";
            }
        }
    }

    return 0;
}