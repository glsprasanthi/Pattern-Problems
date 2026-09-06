#include <iostream>
using namespace std;

void pattern19(int n){
    //upper half 
    for(int i=0 ; i<n ; i++){

        //left
        for(int j=n-i ; j>0 ; j--){
            cout<<"*";
        } 
        
        //spaces
        for(int s = 0 ; s<i ; s++){
            cout<<"  ";
        }

        //right
        for(int j=n-i ; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half
    for(int i=0 ; i<n ; i++){
        //left
        for(int j=0 ; j<=i; j++){
            cout<<"*";
        } 
        
        //spaces
        for(int s = n - i ; s>1 ; s--){
            cout<<"  ";
        }

        //right
        for(int j=0 ; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n=5 ;
    pattern19(n);
}
