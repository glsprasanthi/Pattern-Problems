#include <iostream>
using namespace std;

void pattern7(int n){
    for (int i = 0 ; i<n ; i++){
        for ( int s = n-1 ; s>i ; s--){
            cout<<" ";
        }
        for ( int j = 0 ; j <(2*i)+1 ; j++){
                cout<<"*";
        }
         cout<<endl;
    }
}
int main() {
    int n=5;
    pattern7(n);
}