#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    if (M <= N * 100)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}