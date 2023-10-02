#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the value of x";
    cin >> x;
    cout << "Enter the value of y";
    cin >> y;
    for (int j=x ; x <= y; x++)
    {
        for (int i = 1; i <= 10; i++)
        {   cout<<"\n";
            cout << x << " * " << i << "=" << x * i;
        }
    }
}