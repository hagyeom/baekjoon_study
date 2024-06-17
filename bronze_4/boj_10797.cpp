// 백준 10797번: 10부제
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;

    vector<int> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
        if (v[i] % 10 == n)
        {
            ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}