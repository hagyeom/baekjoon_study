#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x >= y)
        {
            cout << "MMM BRAINS" << endl;
        }
        else
        {
            cout << "NO BRAINS" << endl;
        }
    }
    return 0;
}