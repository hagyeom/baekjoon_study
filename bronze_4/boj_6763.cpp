#include <iostream>

using namespace std;

int main()
{
    int speed_limit, recorded_speed;
    cin >> speed_limit >> recorded_speed;

    int over_the_limit = recorded_speed - speed_limit;
    int fine;

    if (over_the_limit >= 1 && over_the_limit <= 20)
    {
        fine = 100;
        cout << "You are speeding and your fine is $" << fine << "." << endl;
    }
    else if (over_the_limit >= 21 && over_the_limit <= 30)
    {
        fine = 270;
        cout << "You are speeding and your fine is $" << fine << "." << endl;
    }
    else if (over_the_limit >= 31)
    {
        fine = 500;
        cout << "You are speeding and your fine is $" << fine << "." << endl;
    }
    else if (over_the_limit <= 0)
    {
        cout << "Congratulations, you are within the speed limit!" << endl;
    }

    return 0;
}