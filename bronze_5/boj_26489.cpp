#include <iostream>
#include <string>
using namespace std;

int countNewLines(const string &str)
{
    int count = 0;
    for (char ch : str)
    {
        if (ch == '\n')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string input;
    string line;
    while (getline(cin, line))
    {
        input += line + '\n';
    }
    int newLines = countNewLines(input);
    cout << newLines;
    return 0;
}