/*
Q10. print the pattern:
*
**
***
****
*****
****
***
**
*
*/

#include <iostream>
using namespace std;

void pattern10(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (j = 0; j <= i; j++)
            {
                cout << "*";
            }
        }
        else
        {

            for (j = 0; j < n - 1 - i; j++)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern10(n);
    return 0;
}