#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x, y;
    while (true)
    {
        cin >> x;
        if (x < 0)
        {
            break;
        }
        y = x * 0.167;
        cout << "Objects weighing " << fixed << setprecision(2) << x << " on Earth will weigh " << y << " on the moon." << endl;
    }
    return 0;
}