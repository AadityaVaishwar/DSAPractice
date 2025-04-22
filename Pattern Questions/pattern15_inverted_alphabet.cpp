/*
Q15. print the pattern:
A B C D E 
A B C D 
A B C 
A B 
A 
*/

#include <iostream>
using namespace std;

void pattern15(int n)
{
    int count = 0;
    if (n <= 0)
    {
        return;
    }
    if (n>26)
    {
        cout<<"Please enter a number between 1 and 26 inclusive.";
        return;
    }
    
    for (int row = 0; row < n; row++)
    {
        for (char col = 'A'; col <= 'A' + (n - row -1); col++)
        {
            cout << col <<" ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern15(n);
    return 0;
}