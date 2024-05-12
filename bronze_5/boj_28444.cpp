#include <iostream>
using namespace std;

int main()
{
    int H, I, A, R, C;
    cin >> H >> I >> A >> R >> C;
    int first_term = H * I;
    int second_term = A * R * C;
    int result = first_term - second_term;
    cout << result;
    return 0;
}