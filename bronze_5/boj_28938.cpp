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
        sum += v[i];
    }
    if (sum > 0)
    {
        cout << "Right";
    }
    else if (sum < 0)
    {
        cout << "Left";
    }
    else
    {
        cout << "Stay";
    }
    return 0;
}