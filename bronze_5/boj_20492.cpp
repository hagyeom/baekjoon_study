#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int answer1 = N - (N * 0.22);
    int answer2 = N - (N * 0.044);
    cout << answer1 << " "
         << answer2;
    return 0;
}