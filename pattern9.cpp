#include <iostream>
using namespace std;

void pattern9(int n){
    for (int i = 0 ; i<n ; i++){
        for ( int s = n-1 ; s>i ; s--){
            cout<<" ";
        }
        for ( int j = 0 ; j <(2*i)+1 ; j++){
                cout<<"*";
        }
         cout<<endl;
    }

    for (int i = n - 1 ; i>=0 ; i--){
        for (int s = i ; s < n-1 ; s++){
            cout<<" ";
        }
        for (int j = (2*i)+1 ; j>0 ; j--) {
                cout<<"*";
        }
        cout<<endl;
    }
}
int main() {
    int n=5;
    pattern9(n);
}