#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int score[6];
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> score[i];
    }
    for (int i = 0; i < 5; i++)
    {
        total += score[i];
    }
    cout << total;
    return 0;
}