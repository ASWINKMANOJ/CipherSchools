#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int a, b, c, d, e;

    cout << "Enter Five numbers: " << endl;

    cin >> a >> b >> c >> d >> e;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;

    cout << "The numbers in reverse in order : " << endl;
    cout << arr[4] << " " << arr[3] << " " << arr[2] << " " << arr[1] << " " << arr[0] << endl;

    return 0;
}