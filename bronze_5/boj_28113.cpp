#include <iostream>
using namespace std;

int main()
{
    // N:숭실대입구역의 지하철 승강장까지 걸어가는 시간
    // A:숭실대별관앞 정류소에 집으로 가는 마지막 버스가 도착하는 시간
    // B: 숭실대입구역에 집으로 가는 마지막 열차가 도착하는 시간
    int N, A, B;
    cin >> N >> A >> B;
    if (A == B && N <= B)
    {
        cout << "Anything";
    }
    else if (A > B && N <= B)
    {
        cout << "Subway";
    }
    else
    {
        cout << "Bus";
    }
    return 0;
}
