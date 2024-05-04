// boj_1271.cpp
#include <iostream>
#include <cstring>
using namespace std;

// big() 함수: 두 문자열을 비교하여 큰 값을 반환
// 문자열을 순회하면서 해당 인덱스의 문자를 비교하여 큰 값을 반환
char *big(char *a, char *b)
{
    for (size_t i = 0; i < strlen(a); i++)
    {
        if (a[i] < b[i])
            return b;
        if (a[i] > b[i])
            return a;
    }
    return a;
}

// subtract() 함수: 큰 정수를 표현하는 문자열에서 작은 정수를 뺄셈
// 두 문자열을 뺄셈하고, 필요에 따라 자리 올림을 수행
void subtract(char *a, char *b) // 나눗셈은 뺄셈을 여러번하는 연산이다.
{
    size_t len_b = strlen(b);

    for (size_t i = 0; i < len_b; i++)
    {
        a[i] = a[i] - b[i] + '0';
    }
    for (int i = len_b - 1; i >= 0; i--)
    {
        if (a[i] < '0')
        {
            a[i] += 10;
            a[i - 1]--;
        }
    }
}

// devidesubtract() 함수: 나눗셈을 구현하기 위해 뺄셈을 여러 번 수행
// 나누는 수보다 큰 정수를 나누기 위해 뺄셈을 반복하여 몫을 계산
void devidesubtract(char *a, char *b, char *q, int index)
{
    q[index] = '0';
    while (a[index - 1] > '0' || big(a + index, b) == a + index)
    {
        subtract(a + index, b);
        ++q[index];
    }
}

// devide() 함수: 나눗셈을 수행
// 주어진 두 문자열을 나누고 몫을 계산하여 문자열로 반환
void devide(char *a, char *b, char *q)
{
    int index = 0;
    int digit = strlen(a) - strlen(b);

    while (index <= digit)
        devidesubtract(a, b, q, index++);

    q[index] = '\0';
}

int main()
{
    char a[1001];
    char b[1001];
    char q[1001];
    int qi = 0, ai = 0;
    cin >> a >> b;
    devide(a, b, q);

    while (q[qi] == '0')
        qi++;
    while (a[ai] == '0')
        ai++;

    if (q[0] == '\0')
    {
        q[0] = '0';
        q[1] = '\0';
    }

    if (a[ai] == '\0')
        ai--;

    if (q[qi] == '\0')
        qi--;

    cout << q + qi << '\n';
    cout << a + ai << '\n';
    return 0;
}