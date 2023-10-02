#include <iostream>
using namespace std;

int main()
{

    int x ,i;

    cout << "Enter the value of x: ";
    cin >> x;
    cout<<"Factor of "<<x<< " is: ";
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
          cout << i<< " ";
        }
          
    }
}