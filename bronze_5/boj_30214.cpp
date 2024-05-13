#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double s1, s2;
    cin >> s1 >> s2;
    if (s1 >= s2 / 2)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "H" << endl;
    }
    return 0;
}