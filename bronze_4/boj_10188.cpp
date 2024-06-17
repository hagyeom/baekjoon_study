// 백준 10188번: Quadrilateral
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < a; k++)
            {
                cout << "X";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}