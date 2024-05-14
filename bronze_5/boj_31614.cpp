#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, m;
    cin >> h >> m;
    cout << h * 60 + m;

    return 0;
}