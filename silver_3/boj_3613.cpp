#include <bits/stdc++.h>
using namespace std;

// java 형식인지 확인하는 함수
bool isJavaStyle(const string &var)
{
    if (var.empty() || isupper(var[0]))
    {
        return false;
    }
    for (char ch : var)
    {
        if (ch == '_')
        {
            return false;
        }
    }
    return true;
}

// c++ 형식인지 확인하는 함수
bool isCppStyle(const string &var)
{
    if (var.empty() || var[0] == '_' || var.back() == '_')
    {
        return false;
    }
    for (int i = 0; i < (int)var.size(); i++)
    {
        if (isupper(var[i]))
        {
            return false;
        }
        if (var[i] == '_' && (i + 1 < (int)var.size() && var[i + 1] == '_'))
        {
            return false;
        }
    }
    return true;
}

// java 형식으로 변환하는 함수
string toJavaStyle(const string &var)
{
    string result;
    bool capitalizeNext = false;
    for (char ch : var)
    {
        if (ch == '_')
        {
            capitalizeNext = true;
        }
        else
        {
            result += capitalizeNext ? toupper(ch) : ch;
            capitalizeNext = false;
        }
    }
    return result;
}

// c++ 형식으로 변환하는 함수
string toCppStyle(const string &var)
{
    string result;
    for (char ch : var)
    {
        if (isupper(ch))
        {
            result += '_';
            result += tolower(ch);
        }
        else
        {
            result += ch;
        }
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string var;
    cin >> var;

    if (isJavaStyle(var))
    {
        cout << toCppStyle(var) << '\n';
    }
    else if (isCppStyle(var))
    {
        cout << toJavaStyle(var) << '\n';
    }
    else
    {
        cout << "Error!\n";
    }

    return 0;
}