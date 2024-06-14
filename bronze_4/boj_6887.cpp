#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tiles;
    cin >> tiles;

    int length = sqrt(tiles);
    cout << "The largest square has side length " << length << "." << endl;
    return 0;
}