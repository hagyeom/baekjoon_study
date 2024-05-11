#include <iostream>
#include <string>
using namespace std;

int main()
{
    string initial;
    cin >> initial;
    if (initial == "NLCS")
    {
        cout << "North London Collegiate School";
    }
    else if (initial == "BHA")
    {
        cout << "Branksome Hall Asia";
    }
    else if (initial == "KIS")
    {
        cout << "Korea International School";
    }
    else if (initial == "SJA")
    {
        cout << "St. Johnsbury Academy";
    }
    return 0;
}