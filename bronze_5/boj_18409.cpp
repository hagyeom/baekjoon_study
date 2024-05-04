#include <iostream>
#include <string>
using namespace std;

int countVowels(const string &s)
{
    int count = 0;
    for (char c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int N;
    string S;
    cin >> N >> S;

    int vowelCount = countVowels(S);
    cout << vowelCount;

    return 0;
}