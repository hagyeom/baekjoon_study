#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(const string &str)
{
    string result = "";
    char prev = '\0'; // 이전 문자를 저장하기 위한 변수('\0'은 널 문자로 초기화)
    for (char ch : str)
    {
        if (ch != prev)
        {                 // 현재 문자가 이전 문자와 다르면
            result += ch; // 결과에 현재 문자 추가
            prev = ch;    // 이전 문자를 현재 문자로 업데이트
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(); // 개행 문자 처리

    for (int i = 0; i < n; ++i)
    {
        string str;
        getline(cin, str);
        cout << removeDuplicates(str) << endl;
    }

    return 0;
}