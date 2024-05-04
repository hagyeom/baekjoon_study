#include <iostream>
using namespace std;

int main()
{
    int ur, tr, uo, to;
    cin >> ur >> tr >> uo >> to;
    int score = 56 * ur + 24 * tr + 14 * uo + 6 * to;
    cout << score;
    return 0;
}