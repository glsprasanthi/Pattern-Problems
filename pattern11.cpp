#include <iostream>
using namespace std;

void pattern11(int n){
    for (int i = 0 ; i<n ; i++){
        int value = (i%2==0)? 1 : 0;
        for(int j=0 ; j<=i ; j++){
            cout<<value;
            value = 1-value;
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    pattern11(n);
}
