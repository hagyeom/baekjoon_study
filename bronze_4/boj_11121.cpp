// 백준 11121번: Communication Channels
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string input, output;
    for (int i = 0; i < t; i++)
    {
        cin >> input >> output;
        if (input == output)
        {
            cout << "OK\n";
        }
        else
        {
            cout << "ERROR\n";
        }
    }

    return 0;
}