#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0;
    cout << "Enter a number: ";
    cin >> x;
    if (x == 0)
    {
        cout <<x << " is not a perfect number ";
    }
    else
    {

        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                sum = sum + i;
            }
        }
        int y = x * 2;
        if (sum == y)
        {
            cout << "number is perfect";
        }
        else
        {
            cout << "number is not perfect";
        }
    }
}