#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5);
    int sum = 0;
    int avg;
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (v[i] < 40)
        {
            v[i] = 40;
        }
        sum += v[i];
    }
    avg = sum / 5;

    cout << avg << endl;

    return 0;
}