/*
Q19. print the pattern:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

#include <iostream>
using namespace std;

void pattern19(int n)
{
    int totalRows = 2 * n;
    for (int row = 0; row < totalRows; row++)
    {
        int stars = row < n ? n - row : row - n + 1;
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
    pattern19(n);
    return 0;
}