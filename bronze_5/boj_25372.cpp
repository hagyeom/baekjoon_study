#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string str;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        if (str.length() >= 6 && str.length() <= 9)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}