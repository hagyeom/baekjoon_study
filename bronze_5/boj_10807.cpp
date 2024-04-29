#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, v, input, count = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i ++)
    {
        cin >> input;
        arr.push_back(input);
    }
    cin >> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}