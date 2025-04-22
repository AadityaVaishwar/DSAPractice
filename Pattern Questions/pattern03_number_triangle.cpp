<<<<<<< HEAD
/*
Q3. print the pattern:
1 
1 2 
1 2 3 
1 2 3 4 
*/
#include <iostream>
using namespace std;

void pattern3(int length){
    int i,j;
    for(i = 0; i<length; i++){
        for(j = 0; j<=i; j++){
            cout<< j+1 << " ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the length of the pattern";
    cin>>n;
    pattern3(n);
    return 0;
=======
/*
Q3. print the pattern:
1 
1 2 
1 2 3 
1 2 3 4 
*/
#include <iostream>
using namespace std;

void pattern3(int length){
    int i,j;
    for(i = 0; i<length; i++){
        for(j = 0; j<=i; j++){
            cout<< j+1 << " ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the length of the pattern";
    cin>>n;
    pattern3(n);
    return 0;
>>>>>>> f48553187301226983bacfd851cdee7a5880c765
}