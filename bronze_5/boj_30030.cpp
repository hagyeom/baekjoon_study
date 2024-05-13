#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // A+A*0.1=B
    // 1.1*A=B
    // A=B*10/11
    int A, B;
    cin >> B;
    A = B * 10 / 11;
    cout << A;
    return 0;
}