#include <iostream>
#include <vector>
#include <iomanip> // setprecision를 사용하기 위해 인클루드

using namespace std;

int main()
{
    int caseNumber = 1;

    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        vector<int> data(n);
        for (int i = 0; i < n; i++)
        {
            cin >> data[i];
        }

        double median;
        if (n % 2 == 1)
        {
            median = data[n / 2];
        }
        else
        {
            median = (data[n / 2 - 1] + data[n / 2]) / 2.0;
        }

        cout << "Case " << caseNumber << ": " << fixed << setprecision(1) << median << endl;
        caseNumber++;
    }

    return 0;
}