#include <iostream>
using namespace std;

int main()
{
    int x, sqr, r, f = 0;

    cout << "enter the number: ";
    cin >> x;
    sqr = x * x;
    while (x > 0)
    {
        if (sqr % 10 != x % 10)
        {
            f++;
        }
        sqr = sqr / 10;
        x = x / 10;
    }
    if (f > 0)
    {
        cout << "number is not automorphic";
    }
    else
    {
        cout << "number is automorphic";
    }
}