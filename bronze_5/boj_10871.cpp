#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, input;
    cin >> n >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < x)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}