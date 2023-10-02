#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the value of a , b and c";
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && c + a > b )
    {
        cout << "tringle is valid ";
    }
   
    else
        cout << "tringle is not valid";
}