// 가장 아래 단계의 블록 개수가 n개라면
// 총 피라미드의 블록 개수는 다음과 같은
// 등차수열의 합으로 나타낼 수 있다
// 총 블록 개수=n+(n-1)+(n-2)+...+1
// 일반항을 구하면 다음과 같다
// 총 블록 개수(n)=n*(n+1)/2
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        int totalBlocks = n * (n + 1) / 2;
        cout << totalBlocks << "\n";
    }

    return 0;
}