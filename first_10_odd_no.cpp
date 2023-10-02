#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number ";
    cin >> x;
    for (int i = 1; i <= x * 2; i += 2)
    {
        if (i % 2)
        {
            cout << i<< " ";
        }
    }
}