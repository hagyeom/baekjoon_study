#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age, weight;

    while (true)
    {
        cin >> name >> age >> weight;

        // 입력의 마지막을 확인하는 조건
        if (name == "#" && age == 0 && weight == 0)
            break;

        // 나이가 17세보다 많거나 몸무게가 80kg 이상인 경우 성인부
        if (age > 17 || weight >= 80)
            cout << name << " Senior" << endl;
        else
            cout << name << " Junior" << endl;
    }

    return 0;
}
