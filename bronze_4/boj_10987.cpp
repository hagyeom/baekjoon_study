// 백준 10987번: 모음의 개수
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (char c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}