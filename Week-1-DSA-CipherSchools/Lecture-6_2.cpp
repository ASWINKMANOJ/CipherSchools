#include <iostream>
using namespace std;

int main()
{
    int i;
    int input;
    for (i = 0; i < 101; i++)
    {
        cin >> input;
        if (input == 65)
        {
            cout << "You Guessed the number" << endl;
        }
    }

    // while (input != 35)
    // {
    //     cin >> input;
    // }
    // cout << "You Guessed the number" << endl;
    return 0;
}