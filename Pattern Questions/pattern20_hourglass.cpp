/*
Q20. print the pattern:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/

#include <iostream>
using namespace std;

void pattern20(int n)
{
    int totalRows = (2 * n) - 1;
    for (int row = 0; row < totalRows; row++)
    {
        int stars = row < n ? row + 1 : totalRows - row;
        int spaces = 2* (n-stars);

        for (int col = 0; col < stars; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < spaces; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < stars; col++)
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
    pattern20(n);
    return 0;
}