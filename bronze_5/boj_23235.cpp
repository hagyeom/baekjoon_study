#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int caseNum = 1;
    while (true)
    {
        int N;
        cin >> N;

        if (N == 0)
        {
            break;
        }

        vector<int> arr(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        cout << "Case " << caseNum << ": Sorting... done!"
             << "\n";
        caseNum++;
    }

    return 0;
}