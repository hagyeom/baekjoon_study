#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long l, p;
    cin >> l >> p;
    vector<long long> v(5);
    for (int i = 0; i < 5; ++i)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] - l * p << " ";
    }
    return 0;
}