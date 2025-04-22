<<<<<<< HEAD
/*
Q22. print the pattern:
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

#include <iostream>
using namespace std;


void pattern22(int n)
{
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top = i;
            int left = j;
            int bottom = 2*n - 2 - i;
            int right = 2*n -2 -j;
            cout<< n - min(min(top,bottom),min(left,right));
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern22(n);
    return 0;
=======
/*
Q22. print the pattern:
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

#include <iostream>
using namespace std;


void pattern22(int n)
{
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top = i;
            int left = j;
            int bottom = 2*n - 2 - i;
            int right = 2*n -2 -j;
            cout<< n - min(min(top,bottom),min(left,right));
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cout << "Enter the length of the pattern: ";
    cin >> n;
    pattern22(n);
    return 0;
>>>>>>> f48553187301226983bacfd851cdee7a5880c765
}