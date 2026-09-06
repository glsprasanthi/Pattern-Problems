#include <iostream>
using namespace std;


void pattern21(int n){
    for(int i=0 ; i<n ;i++){
        cout<<"*";
    }
    cout<<endl;

    for(int i=0 ; i<n-2 ; i++){
        cout<<"*";
        for(int s=0 ; s<n-2 ; s++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    for(int i=0 ; i<n ;i++){
        cout<<"*";
    }
}

int main(){
    int n=8 ;
    pattern21(n);
}
