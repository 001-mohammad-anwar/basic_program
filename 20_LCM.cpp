#include <iostream>
using namespace std;
int main()
{

    int a, b, L;
    cout << "Enter the valuie of a  nad b: ";
    cin >> a >> b;

    for (L = a > b ? a : b; L <= a * b; L++)
    {
        if (L % a == 0 && L % b == 0)
        {
            break;
        }
    }
    cout << "LCM of " << a << " and " << b << " is: " << L;
}