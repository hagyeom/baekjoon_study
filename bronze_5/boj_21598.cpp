#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    if (N == 1)
    {
        cout << "SciComLove";
    }
    else if (N == 2)
    {
        cout << "SciComLove"
             << "\n"
             << "SciComLove";
    }

    return 0;
}