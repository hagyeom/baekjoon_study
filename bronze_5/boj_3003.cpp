#include <iostream>
using namespace std;

int main()
{
    int chess[7] = {1, 1, 2, 2, 2, 8};
    int now[7];
    for (int i = 0; i < 6; i++)
    {
        cin >> now[i];
        cout << chess[i] - now[i] << " ";
    }
    return 0;
}