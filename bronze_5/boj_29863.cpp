#include <iostream>
using namespace std;

int main()
{
    int time_to_sleep;
    int waking_up_time;

    cin >> time_to_sleep >> waking_up_time;

    if (20 <= time_to_sleep && time_to_sleep <= 23)
    {
        cout << waking_up_time + 24 - time_to_sleep << endl;
    }
    else if (0 <= time_to_sleep && time_to_sleep <= 3)
    {
        cout << waking_up_time - time_to_sleep << endl;
    }

    return 0;
}