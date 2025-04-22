/*
Q21. print the pattern:
****
*  *
*  *
****
*/

#include <iostream>
using namespace std;

void pattern21(int n)
{
    int totalRows = n;
    for (int row = 0; row < totalRows; row++)
    {
        int stars1 = row == 0 || row == n - 1 ? n : 1;
        int spaces = stars1 == 1 ? n - 2 : 0;
        int stars2 = stars1 == 1 ? 1 : 0;

        for (int col = 0; col < stars1; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < spaces; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < stars2; col++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern21_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern21_2(n);
    return 0;
}