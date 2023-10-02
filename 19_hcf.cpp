#include <iostream>

using namespace std;
int main()
{
    int a, b, h;
    int y=1;
      int k = y%5;
      cout<<"the modulo of 1/5 is: "<<k;
      cout<<endl;
      cout<<endl;

    cout << "Enter the two value of a and b: ";
    cin >> a >> b;

    for (h = a < b ? a : b; h >= 1; h--)
    {
        if (a % h == 0 && b % h == 0)
        {
            break;
        }
    }
    cout << "the heighest commmon factor of " << a << "and " << b <<" is: " << h;
}