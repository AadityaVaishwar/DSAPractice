<<<<<<< HEAD
/*
Q4. print the pattern:
1 
2 2 
3 3 3 
4 4 4 4 
*/
#include <iostream>
using namespace std;

void pattern4(int length){
    int i,j;
    for(i = 0; i<length; i++){
        for(j = 0; j<=i; j++){
            cout<< i+1 << " ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the length of the pattern";
    cin>>n;
    pattern4(n);
    return 0;
=======
/*
Q4. print the pattern:
1 
2 2 
3 3 3 
4 4 4 4 
*/
#include <iostream>
using namespace std;

void pattern4(int length){
    int i,j;
    for(i = 0; i<length; i++){
        for(j = 0; j<=i; j++){
            cout<< i+1 << " ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the length of the pattern";
    cin>>n;
    pattern4(n);
    return 0;
>>>>>>> f48553187301226983bacfd851cdee7a5880c765
}