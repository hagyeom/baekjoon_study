// 백준 10768번: 특별한 날
#include <iostream>

using namespace std;

int main()
{
    int month, day;
    cin >> month >> day;

    if (month < 2 || (month == 2 && day < 18))
    {
        cout << "Before\n";
    }
    else if (month > 2 || (month == 2 && day > 18))
    {
        cout << "After\n";
    }
    else if (month == 2 && day == 18)
    {
        cout << "Special\n";
    }

    return 0;
}