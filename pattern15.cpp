#include <iostream>
using namespace std;

void pattern15(int n){
    for(int i=1 ; i<=n ; i++){
        char ch='A';
        for(int j=i ; j<=n ; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

int main(){
    int n=5 ;
    pattern15(n);
}
