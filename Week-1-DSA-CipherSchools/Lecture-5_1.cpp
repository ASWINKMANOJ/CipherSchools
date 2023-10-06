#include <iostream>
using namespace std;

int main()
{
    int arr[9];
    int i;

    cout << "Give 10 integers: " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "The 10 given integers" << endl;
    for (i = 9; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}