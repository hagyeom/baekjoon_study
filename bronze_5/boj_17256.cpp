#include <iostream>
using namespace std;

int main()
{
    int a_x, a_y, a_z;
    int b_x, b_y, b_z;
    int c_x, c_y, c_z;
    cin >> a_x >> a_y >> a_z;
    cin >> c_x >> c_y >> c_z;
    b_x = c_x - a_z;
    b_y = c_y / a_y;
    b_z = c_z - a_x;
    cout << b_x << " " << b_y << " " << b_z;
    return 0;
}