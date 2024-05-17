#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a;
    while (true)
    {
        cin >> a;
        if (a == 0)
        {
            break;
        }
        double result = 1 + a + pow(a, 2) + pow(a, 3) + pow(a, 4);
        cout << fixed << setprecision(2) << result << endl;
    }
    return 0;
}