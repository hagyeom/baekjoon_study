#include <iostream>
#include <string>
using namespace std;
// 각 자리의 숫자를 문자열에서 읽어와서 '0'을 빼줌으로써 실제 숫자로 변환
// 이전까지 구한 나머지에 10을 곱하고 새로운 자리의 숫자를 더해서 나머지 연산을 수행
// 모든 자리의 숫자를 순회하면서 10의 배수를 계속 더해가며 나머지를 구할 수 있음
bool isMultipleOf42(const string &number)
{
    int remainder = 0; // 나머지
    for (char digit : number)
    {
        remainder = (remainder * 10 + (digit - '0')) % 42;
    }
    return remainder == 0;
}

int main()
{
    string number;
    while (true)
    {
        cin >> number;
        if (number == "0")
        {
            break;
        }
        if (isMultipleOf42(number))
        {
            cout << "PREMIADO" << endl;
        }
        else
        {
            cout << "TENTE NOVAMENTE" << endl;
        }
    }

    return 0;
}