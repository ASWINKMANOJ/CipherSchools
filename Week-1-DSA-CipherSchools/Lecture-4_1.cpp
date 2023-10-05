#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "a is greater than b." << endl;
    }
    else
    {
        cout << "b is either greater than or equal to a." << endl;
    }

    int c, d, e, f;
    cin >> c >> d >> e >> f;
    if (c > d && e > f)
    {
        cout << "Haha" << endl;
    }
    else if (c < d && e < f)
    {
        cout << "Hehe" << endl;
    }
    else
    {
        cout << "Huhu" << endl;
    }

    int k;
    cin >> k;
    switch (k)
    {
    case 1:
        cout << "This is case 1" << endl;
        break;
    case 2:
        cout << "This is case 2" << endl;
        break;
    case 3:
        cout << "This is case 3" << endl;
        break;
    default:
        cout << "This is default case" << endl;
        break;
    }
}