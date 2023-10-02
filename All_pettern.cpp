#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i == 1 || j == 1 || i == 5 || j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 6 - i && j <= 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i && j <= 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j <= 6 - i || j >= 4 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    int k;
    for (int i = 1; i <= 4; i++)
    {
        k = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                cout << k;
                j < 4 ? k++ : k--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        k = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 1 && j <= i)
            {
                cout << k;
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    k = 1;
    cout << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 1 && j <= i)
            {
                cout << k << " ";
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 1 && j <= i)
            {
                int l = i + j;
                if (j % 2 == 0)
                {
                    cout << "0";
                }
                else if (j % 2 != 0)
                {
                    cout << "1";
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (j <= i || j >= 9 - i)

                cout << "*";

            else

                cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (j <= 5 - i || j >= 4 + i)

                cout << "*";

            else

                cout << " ";
        }
        cout << endl;
    }
}