#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    int even_count = 0, odd_count = 0;
    for (int num : numbers)
    {
        if (num % 2 == 0)
        {
            ++even_count;
        }
        else
        {
            ++odd_count;
        }
    }

    if (even_count > odd_count)
    {
        cout << "Happy" << "\n";
    }
    else
    {
        cout << "Sad" << "\n";
    }

    return 0;
}