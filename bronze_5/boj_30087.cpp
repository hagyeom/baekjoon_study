#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    string semeinar;
    for (int i = 0; i < N; i++)
    {
        cin >> semeinar;
        if (semeinar == "Algorithm")
        {
            cout << "204" << endl;
        }
        else if (semeinar == "DataAnalysis")
        {
            cout << "207" << endl;
        }
        else if (semeinar == "ArtificialIntelligence")
        {
            cout << "302" << endl;
        }
        else if (semeinar == "CyberSecurity")
        {
            cout << "B101" << endl;
        }
        else if (semeinar == "Network")
        {
            cout << "303" << endl;
        }
        else if (semeinar == "Startup")
        {
            cout << "501" << endl;
        }
        else if (semeinar == "TestStrategy")
        {
            cout << "105" << endl;
        }
    }

    return 0;
}