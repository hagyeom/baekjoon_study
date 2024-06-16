#include <iostream>

using namespace std;

// Q1(+,+) Q2(-,+) Q3(-,-) Q4(+,-)
int main()
{
    double x, y;
    while (true)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << "AXIS" << "\n";
            break;
        }

        if (x > 0 && y > 0)
        {
            cout << "Q1" << "\n";
        }
        else if (x < 0 && y > 0)
        {
            cout << "Q2" << "\n";
        }
        else if (x < 0 && y < 0)
        {
            cout << "Q3" << "\n";
        }
        else if (x > 0 && y < 0)
        {
            cout << "Q4" << "\n";
        }
        else if (x == 0 || y == 0)
        {
            cout << "AXIS" << "\n";
        }
    }
    return 0;
}