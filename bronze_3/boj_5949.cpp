// 백준 5949번: Adding Commas
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string num;
    cin >> num;
    stack<char> stk;
    int count = 0;
    for (int i = num.size() - 1; i >= 0; i--)
    {
        stk.push(num[i]);
        count++;
        if (count == 3 && i != 0)
        {
            stk.push(',');
            count = 0;
        }
    }
    while (!stk.empty())
    {
        cout << stk.top();
        stk.pop();
    }

    return 0;
}