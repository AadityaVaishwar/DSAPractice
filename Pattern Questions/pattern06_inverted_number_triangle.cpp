/*
Q6. print the pattern:
1 2 3 4 
1 2 3
1 2
1
*/
#include <iostream>
using namespace std;

void pattern6(int length){
    int i,j;
    for(i = 0; i<length; i++){
        for(j = 0; j<length-i; j++){
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the length of the pattern";
    cin>>n;
    pattern6(n);
    return 0;
}