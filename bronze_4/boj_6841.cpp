#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string short_form;
    while (1)
    {
        cin >> short_form;
        if (short_form == "CU")
        {
            cout << "see you" << endl;
        }
        else if (short_form == ":-)")
        {
            cout << "I’m happy" << endl;
        }
        else if (short_form == ":-(")
        {
            cout << "I’m unhappy" << endl;
        }
        else if (short_form == ";-)")
        {
            cout << "wink" << endl;
        }
        else if (short_form == ":-P")
        {
            cout << "stick out my tongue" << endl;
        }
        else if (short_form == "(~.~)")
        {
            cout << "sleepy" << endl;
        }
        else if (short_form == "TA")
        {
            cout << "totally awesome" << endl;
        }
        else if (short_form == "CCC")
        {
            cout << "Canadian Computing Competition" << endl;
        }
        else if (short_form == "CUZ")
        {
            cout << "because" << endl;
        }
        else if (short_form == "TY")
        {
            cout << "thank-you" << endl;
        }
        else if (short_form == "YW")
        {
            cout << "you’re welcome" << endl;
        }
        else if (short_form == "TTYL")
        {
            cout << "talk to you later" << endl;
            break;
        }
        else
        {
            cout << short_form << endl;
        }
    }
    return 0;
}