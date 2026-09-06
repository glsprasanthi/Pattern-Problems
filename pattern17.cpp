
#include <iostream>
using namespace std;

void pattern17(int n){
    for(int i = 0; i < n; i++) {
        // spaces
        for(int s = n-i; s >1; s--) {
            cout << " ";
        }
        char ch = 'A';
        // left half
        for(int j = 0; j <= i; j++) {
            cout << ch;
            ch++;
        }
        ch -= 2;

        // right half
        for(int j = 0; j < i; j++) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    pattern17(n);
}
