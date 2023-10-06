#include <iostream>
using namespace std;

int main()
{
    int password;
    do
    {
        cin >> password;
    } while (password < 99999);

    int count = 0;
    while (1)
    {
        cout << count << " ";
        if (count == 100)
        {
            break;
        }
        count++;
    }
    return 0;
}