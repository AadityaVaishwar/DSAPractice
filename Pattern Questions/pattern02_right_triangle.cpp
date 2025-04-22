<<<<<<< HEAD
/*
Q2. print the pattern:
*
**
***
****
*/
#include <iostream>
using namespace std;

void pattern2(int length){
    int i,j;
    for(i = 0; i<length; i++){
        for(j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the length of the pattern";
    cin>>n;
    pattern2(n);
    return 0;
=======
/*
Q2. print the pattern:
*
**
***
****
*/
#include <iostream>
using namespace std;

void pattern2(int length){
    int i,j;
    for(i = 0; i<length; i++){
        for(j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the length of the pattern";
    cin>>n;
    pattern2(n);
    return 0;
>>>>>>> f48553187301226983bacfd851cdee7a5880c765
}