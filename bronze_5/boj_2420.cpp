#include <iostream>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    if ((n - m) < 0)
    {
        cout << -(n - m);
    }
    else
    {
        cout << n - m;
    }
    return 0;
}