/*
Q9. print the pattern:
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

#include <iostream>
using namespace std;

void pattern9(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern9(n);
    return 0;
}