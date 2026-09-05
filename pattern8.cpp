#include <iostream>
using namespace std;

void pattern8(int n ){
     for ( int i = 1 ; i<=n ; i++ ){
        for( int s = 1 ; s<i ; s++){
            cout<<" ";
        }
        for(int j = 2*(n-i) ; j>=0 ; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {
    int n=5 ;
    pattern8(n);
}