#include <iostream>
using namespace std;

void pattern18(int n){
    for ( int i = 0 ; i<n ; i++){
        char ch = 'E' - i;
        for( int j=0 ; j<=i ; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
int main(){
    int n=5 ;
    pattern18(n);
}
