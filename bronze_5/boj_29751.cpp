#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int W, H;
    cin >> W >> H;
    double area = W * H * 0.5;
    cout << fixed << setprecision(1) << area << endl;
    return 0;
}