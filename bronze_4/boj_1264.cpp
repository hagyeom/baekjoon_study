#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int countVowels(string s)
{
    int count = 0;
    for (char c : s)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string input;
    while (getline(cin, input))
    {
        if (input == "#")
        {
            break;
        }
        int vowels = countVowels(input);
        cout << vowels << endl;
    }
    return 0;
}