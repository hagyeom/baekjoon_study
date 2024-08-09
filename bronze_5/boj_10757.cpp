// 백준 10757번: 큰 수 A + B
#include <bits/stdc++.h>
using namespace std;

void addLargeNumbers(const string &num1, const string &num2)
{
    stack<int> stack1, stack2, result;

    // num1과 num2의 각 자릿수를 스택에 저장
    for (char digit : num1)
    {
        stack1.push(digit - '0');
    }
    for (char digit : num2)
    {
        stack2.push(digit - '0');
    }

    int carry = 0; // 받아올림
    // 두 숫자의 각 자릿수를 더하는 과정
    while (!stack1.empty() || !stack2.empty() || carry)
    {
        int sum = carry;
        if (!stack1.empty())
        {
            sum += stack1.top();
            stack1.pop();
        }
        if (!stack2.empty())
        {
            sum += stack2.top();
            stack2.pop();
        }
        carry = sum / 10;
        result.push(sum % 10);
    }

    // 결과 출력
    while (!result.empty())
    {
        cout << result.top();
        result.pop();
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a >> b;
    addLargeNumbers(a, b);

    return 0;
}