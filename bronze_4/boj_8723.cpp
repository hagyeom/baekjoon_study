#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
    {
        cout << "1" << endl;
    }
    else if (v[0] == v[1] && v[1] == v[2])
    {
        cout << "2" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}