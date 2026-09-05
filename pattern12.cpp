#include <iostream>
using namespace std;

void pattern12(int n){
    for ( int i = 1 ; i<=n ; i++){

        //left triangle
        for( int j=1 ; j<=i ; j++){
            cout<<j;
        }

        //spaces
        for(int s=2*(n-i); s>0 ; s--){
            cout<<" ";
        }

        //right triangle
        for ( int j = i ; j>=1 ; j-- ){
            cout<<j;

        }
        cout<<endl;
    }
}

int main(){
    int n=4 ;
    pattern12(n);
}

