#include <iostream>
using namespace std;

void pattern5(int n){
    for (int i = n ; i>0 ; i--){
        for ( int j = 1 ; j<=i ; j++){
            cout<<"*";
        }
         cout<<endl;
    }
}
int main() {
    int n=5;
    pattern5(n);
}