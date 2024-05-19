#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int total_time = a + b + c + d;
    int x = total_time / 60;
    int y = total_time % 60;
    cout << x << "\n"
         << y;
    return 0;
}