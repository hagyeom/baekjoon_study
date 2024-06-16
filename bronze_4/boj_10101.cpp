// 백준 10101번: 삼각형 외우기
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    if ((v[0] == 60 && v[1] == 60) && (v[2] == 60))
    {
        cout << "Equilateral" << "\n";
    }
    else if ((v[0] + v[1] + v[2] == 180) && (v[0] == v[1] || v[0] == v[2] || v[1] == v[2]))
    {
        cout << "Isosceles" << "\n";
    }
    else if ((v[0] + v[1] + v[2] == 180) && (v[0] != v[1] && v[0] != v[2]))
    {
        cout << "Scalene" << "\n";
    }
    else if (v[0] + v[1] + v[2] != 180)
    {
        cout << "Error" << "\n";
    }
    return 0;
}