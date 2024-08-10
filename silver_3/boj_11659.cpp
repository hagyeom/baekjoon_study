#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 1);
    vector<int> prefix_sum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }
    for (int k = 0; k < m; k++)
    {
        int i, j;
        cin >> i >> j;
        cout << prefix_sum[j] - prefix_sum[i - 1] << '\n';
    }

    return 0;
}