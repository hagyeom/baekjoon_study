#include <iostream>
using namespace std;

int main()
{
    // x/C=3B/A
    int A, B, C;
    cin >> A >> B >> C;
    int x = 3 * B * C / A; // WARBOY의 성능
    cout << x;
    return 0;
}