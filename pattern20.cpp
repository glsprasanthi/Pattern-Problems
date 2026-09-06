#include <iostream>
using namespace std;

void pattern20(int n){
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

    for ( int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            cout<<"*";
        }

        for(int s=0 ; s<=i ; s++){
            cout<<"  ";
        }

        for(int j=0 ; j<n-i-1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n=5 ;
    pattern20(n);
}
