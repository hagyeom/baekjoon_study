// 백준 10480번: Oddities
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 != 0)
        {
            cout << v[i] << " is odd\n";
        }
        else if (v[i] % 2 == 0)
        {
            cout << v[i] << " is even\n";
        }
    }

    return 0;
}