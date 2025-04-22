/*
Q18. print the pattern:
E
DE
CDE
BCDE
ABCDE
*/

#include <iostream>
using namespace std;

void pattern18(int n)
{
    if (n <= 0)
    {
        return;
    }
    if (n>5)
    {
        cout<<"Please enter a number between 1 and 5 inclusive.";
        return;
    }
    
    for (int row = 0; row < n; row++)
    {
       for(int col = 0; col <= row; col++)
       {
            cout<< char('E' - row + col);
       }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern18(n);
    return 0;
}