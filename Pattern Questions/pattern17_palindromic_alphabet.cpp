/*
Q17. print the pattern:
   A   
  ABA  
 ABCBA 
ABCDCBA
*/

#include <iostream>
using namespace std;

void pattern17(int n)
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
    
    for (int row = 0; row < n; row++)
    {
        for(int col = 0 + row; col < n-1; col++){ //Spaces before
            cout<<" ";
        }

        for (char col = 'A'; col < 'A' + row; col++) //Alphabets before center
        {
           cout<< col;
        }

        cout << char('A' + row); // Prints center

        for (char col = 'A' - 1  + row; col >= 'A'; col--) //Alphabets after center
        {
           cout<< col;
        }

        for(int col = 0 + row; col < n-1; col++){ //Spaces after
            cout<<" ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern17(n);
    return 0;
}