#include <iostream>
#include <string>

int main()
{
    long long n;   // 입력받을 수 있는 최대 범위를 고려하여 long long 타입 사용
    std::cin >> n; // 사용자로부터 숫자 입력 받기

    bool containsSeven = false;    // 숫자에 7이 포함되어 있는지 여부
    bool divisibleBySeven = false; // 숫자가 7로 나누어지는지 여부

    // 숫자를 문자열로 변환하여 각 자리수를 확인
    std::string nStr = std::to_string(n);
    for (char c : nStr)
    {
        if (c == '7')
        {
            containsSeven = true;
            break; // 7을 발견하면 더 이상 확인할 필요가 없으므로 반복문 탈출
        }
    }

    // 7로 나누어지는지 확인
    if (n % 7 == 0)
    {
        divisibleBySeven = true;
    }

    // 조건에 따라 결과 출력
    if (!containsSeven && !divisibleBySeven)
    {
        std::cout << 0;
    }
    else if (!containsSeven && divisibleBySeven)
    {
        std::cout << 1;
    }
    else if (containsSeven && !divisibleBySeven)
    {
        std::cout << 2;
    }
    else if (containsSeven && divisibleBySeven)
    {
        std::cout << 3;
    }

    return 0;
}
