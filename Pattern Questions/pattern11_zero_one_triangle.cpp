/*
Q11. print the pattern:
1
01
101
0101
10101
*/
#include <iostream>
using namespace std;

void pattern11(int length){
    int i,j;
    for(i = 0; i<length; i++){
        for(j = 0; j<=i; j++)
        {
            if (i%2==0)
            {   
                if (j%2==0)
                {
                    cout<<"1 ";
                }
                else
                {
                    cout<<"0 ";
                }    
            }
            else
            {
                if (j%2==0)
                {
                    cout<<"0 ";
                }
                else
                {
                    cout<<"1 ";
                }
                    
            }
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the length of the pattern: ";
    cin>>n;
    pattern11(n);
    return 0;
}