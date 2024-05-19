#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<int> v;
    v.push_back(a + d - 50);
    v.push_back(a + e - 50);
    v.push_back(b + d - 50);
    v.push_back(b + e - 50);
    v.push_back(c + d - 50);
    v.push_back(c + e - 50);
    int smallest = v[0];
    for (int i = 0; i < v.size(); ++i)
    {
        smallest = min(smallest, v[i]);
    }
    cout << smallest;
    return 0;
}