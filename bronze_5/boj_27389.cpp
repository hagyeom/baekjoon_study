#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double result = n / 4.0;
    cout << fixed << setprecision(2) << result;
    return 0;
}