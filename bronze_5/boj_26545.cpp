#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    cout << sum;
    return 0;
}