#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number, divide, digit, first, swap, last;
    cout << "Enter the number ";
    cin >> number;
    digit = log10(number);
    cout<<digit;
    divide = pow(10, digit);
    first = number / divide;
    number = number % divide;
    last = number % 10;
    number = number / 10;
    swap = last * divide + number * 10 + first;
    cout << swap;
}
