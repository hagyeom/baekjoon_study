#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int day = x % 7;
    if (day == 2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}