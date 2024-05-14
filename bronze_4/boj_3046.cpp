#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // s=(r1+r2)/2
    // 2*s=r1+r2
    // r2=2*s-r1
    int r1, r2, s;
    cin >> r1 >> s;
    r2 = 2 * s - r1;
    cout << r2;
    return 0;
}