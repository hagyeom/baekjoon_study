#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> bits(8);

    for (int i = 0; i < 8; ++i)
    {
        cin >> bits[i];
    }

    bool valid_input = true;
    for (int i = 0; i < 8; ++i)
    {
        if (bits[i] != 0 && bits[i] != 1)
        {
            valid_input = false;
            break;
        }
    }

    if (valid_input)
    {
        cout << "S";
    }
    else
    {
        cout << "F";
    }

    return 0;
}