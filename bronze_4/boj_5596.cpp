#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> s(4);
    vector<int> t(4);

    int s_total = 0, t_total = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
        s_total += s[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cin >> t[i];
        t_total += t[i];
    }

    if (s_total > t_total)
    {
        cout << s_total;
    }
    else if (s_total < t_total)
    {
        cout << t_total;
    }
    else if (s_total == t_total)
    {
        cout << s_total;
    }

    return 0;
}