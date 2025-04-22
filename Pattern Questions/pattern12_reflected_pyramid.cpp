/*
Q12. print the pattern:
1      1
12    21
123  321
12344321
*/

#include <iostream>
using namespace std;

void pattern12(int n){
    int row,col;
    if(n<=0){
        return;
    }
    for ( row = 1; row <= n; row++)
    {
        for(col = 1; col<=row; col++){
            cout<<col;
        }
        for(col=1; col<= 2*n - (2*row); col++){
            cout<<" ";
        }
        for(col = row; col>=1; col--){
            cout<<col;
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter the length of the pattern: ";
    cin>>n;
    pattern12(n);
    return 0;
}