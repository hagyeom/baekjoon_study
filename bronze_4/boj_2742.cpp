#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;
    for (long long i = n; i >= 1; i--)
    {
        cout << i << "\n";
    }
    return 0;
}