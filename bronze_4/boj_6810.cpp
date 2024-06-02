#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, answer;
    a = 9 * 1 + 7 * 3 + 8 * 1 + 0 * 3 + 9 * 1 + 2 * 3 + 1 * 1 + 4 * 3 + 1 * 1 + 8 * 3;
    cin >> b >> c >> d;
    answer = a + b * 1 + c * 3 + d * 1;
    cout << "The 1-3-sum is " << answer << endl;
    return 0;
}