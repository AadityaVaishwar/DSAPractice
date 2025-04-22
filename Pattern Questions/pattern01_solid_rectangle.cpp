/*
Q1. print the pattern:
****
****
****
****
*/
#include <iostream>
using namespace std;

void pattern1(int length){
    int i,j;
    for(i = 0; i<length; i++){
        for(j = 0; j<length; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the length of the pattern";
    cin>>n;
    pattern1(n);
    return 0;
}