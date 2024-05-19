#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = tolower(s[i]);
            }
        }
        cout << s << endl;
    }
    return 0;
}