/*
Q16. print the pattern:
A 
B B
C C C
D D D D
E E E E E
F F F F F F
*/

#include <iostream>
using namespace std;

void pattern16(int n)
{
    if (n <= 0)
    {
        return;
    }
    if (n>26)
    {
        cout<<"Please enter a number between 1 and 26 inclusive.";
        return;
    }
    
    for (int row = 0; row < n ; row++)
    {
        char Symbol = 'A' + row;
        for (char col = 0; col <= row; col++)
        {
            cout << Symbol <<" ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern16(n);
    return 0;
}