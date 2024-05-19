#include <iostream>
#include <iomanip>

using namespace std;

struct Time
{
    int h, m, s;
};

Time calculate_work_time(Time start, Time end)
{
    Time work_time;
    if (end.s < start.s)
    {
        end.s += 60;
        end.m -= 1;
    }
    work_time.s = end.s - start.s;

    if (end.m < start.m)
    {
        end.m += 60;
        end.h -= 1;
    }
    work_time.m = end.m - start.m;

    work_time.h = end.h - start.h;

    return work_time;
}

int main()
{
    Time startA, endA, startB, endB, startC, endC;
    cin >> startA.h >> startA.m >> startA.s >> endA.h >> endA.m >> endA.s;
    cin >> startB.h >> startB.m >> startB.s >> endB.h >> endB.m >> endB.s;
    cin >> startC.h >> startC.m >> startC.s >> endC.h >> endC.m >> endC.s;

    Time workA = calculate_work_time(startA, endA);
    Time workB = calculate_work_time(startB, endB);
    Time workC = calculate_work_time(startC, endC);

    cout << workA.h << " " << workA.m << " " << workA.s << endl;
    cout << workB.h << " " << workB.m << " " << workB.s << endl;
    cout << workC.h << " " << workC.m << " " << workC.s << endl;

    return 0;
}