<<<<<<< HEAD
/*
Q14. print the pattern:
A 
A B 
A B C 
A B C D 
A B C D E 
*/

#include <iostream>
using namespace std;

void pattern14(int n)
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
        for (char col = 'A'; col <= 'A' + row; col++)
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
    pattern14(n);
    return 0;
=======
/*
Q14. print the pattern:
A 
A B 
A B C 
A B C D 
A B C D E 
*/

#include <iostream>
using namespace std;

void pattern14(int n)
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
        for (char col = 'A'; col <= 'A' + row; col++)
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
    pattern14(n);
    return 0;
>>>>>>> f48553187301226983bacfd851cdee7a5880c765
}