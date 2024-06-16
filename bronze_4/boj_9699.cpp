#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        vector<int> weights(5);
        for (int i = 0; i < 5; ++i)
        {
            cin >> weights[i];
        }

        // 가장 무거운 쌀 포대의 무게 찾기
        int max_weight = *max_element(weights.begin(), weights.end());

        // 결과 출력
        cout << "Case #" << t << ": " << max_weight << endl;
    }

    return 0;
}