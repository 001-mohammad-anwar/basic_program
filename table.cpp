#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number";
    cin >> x;
    if (x == 0)
    {
        cout << x;
    }
    for (int i = 1; i <= 10; i++)
    {
        cout << "\n";
        cout << x << " * " << i << " = " << x * i;
    }
}