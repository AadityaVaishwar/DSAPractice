<<<<<<< HEAD
/*
Q7. print the pattern:
   *   
  ***
 *****
*******
*/

#include<iostream>
using namespace std;

void pattern7(int n){
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for( j = 0; j< n-i-1; j++)
        {
            cout<<" ";
        }
        for( j = 0; j< 2*i + 1; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
}

int main(){
    int n;
    cout<<"Enter the length of the pattern: ";
    cin>>n;
    pattern7(n);
    return 0;
}


/*
Not Optimal Answer-->:
#include <iostream>
#include <math.h>
using namespace std;

void pattern7(int length)
{
    int i, j;
    int k = (length * 2) - 1;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (j> ceil(k/2)-1-i && j< ceil(k/2)+1+i)
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cout << "Enter the length of the pattern";
    cin >> n;
    pattern7(n);
    return 0;
}
=======
/*
Q7. print the pattern:
   *   
  ***
 *****
*******
*/

#include<iostream>
using namespace std;

void pattern7(int n){
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for( j = 0; j< n-i-1; j++)
        {
            cout<<" ";
        }
        for( j = 0; j< 2*i + 1; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
}

int main(){
    int n;
    cout<<"Enter the length of the pattern: ";
    cin>>n;
    pattern7(n);
    return 0;
}


/*
Not Optimal Answer-->:
#include <iostream>
#include <math.h>
using namespace std;

void pattern7(int length)
{
    int i, j;
    int k = (length * 2) - 1;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (j> ceil(k/2)-1-i && j< ceil(k/2)+1+i)
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cout << "Enter the length of the pattern";
    cin >> n;
    pattern7(n);
    return 0;
}
>>>>>>> f48553187301226983bacfd851cdee7a5880c765
*/