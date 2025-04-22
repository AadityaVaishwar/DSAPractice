<<<<<<< HEAD
/*
Q13. print the pattern:
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <iostream>
using namespace std;

void pattern13(int n)
{
    int row, col;
    int count = 0;
    if (n <= 0)
    {
        return;
    }
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << ++count<<" ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern13(n);
    return 0;
=======
/*
Q13. print the pattern:
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <iostream>
using namespace std;

void pattern13(int n)
{
    int row, col;
    int count = 0;
    if (n <= 0)
    {
        return;
    }
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << ++count<<" ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern13(n);
    return 0;
>>>>>>> f48553187301226983bacfd851cdee7a5880c765
}