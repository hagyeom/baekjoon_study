#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char c;
    int n;
    if (cin >>c)
    {
        cout << (int)c;
    }
    else if (cin >>n)
    {
        cout << (char)n;
    }
    return 0;
}