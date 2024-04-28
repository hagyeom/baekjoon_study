#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str);
    for (char ch : str)
    {
        if (isupper(ch))
        {
            cout << (char)tolower(ch);
        }
        else
        {
            cout << (char)toupper(ch);
        }
    }
    return 0;
}