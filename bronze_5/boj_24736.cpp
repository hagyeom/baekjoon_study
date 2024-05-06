#include <iostream>
using namespace std;

int main()
{
    int t1, f1, s1, p1, c1;
    int t2, f2, s2, p2, c2;
    cin >> t1 >> f1 >> s1 >> p1 >> c1;
    cin >> t2 >> f2 >> s2 >> p2 >> c2;
    int box_score_visiting_team = t1 * 6 + f1 * 3 + s1 * 2 + p1 * 1 + c1 * 2;
    int box_score_home_team = t2 * 6 + f2 * 3 + s2 * 2 + p2 * 1 + c2 * 2;
    cout << box_score_visiting_team << " " << box_score_home_team;
    return 0;
}