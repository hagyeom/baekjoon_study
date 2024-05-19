#include <iostream>
#include <string>
using namespace std;

string correctName(const string &name)
{
    string correctedName = name;
    for (char &ch : correctedName)
    {
        if (ch == 'i')
        {
            ch = 'e';
        }
        else if (ch == 'e')
        {
            ch = 'i';
        }
        else if (ch == 'I')
        {
            ch = 'E';
        }
        else if (ch == 'E')
        {
            ch = 'I';
        }
    }
    return correctedName;
}

int main()
{
    string name;
    while (getline(cin, name))
    {
        cout << correctName(name) << endl;
    }
    return 0;
}