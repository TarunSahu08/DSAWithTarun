#include <iostream>
using namespace std;

int NthNo(int n) {

    int a = -1;
    int b = 1;

    for(int i=1; i<=n; i++) {
        
        int c = b;
        b = a + b;
        a = c;
        
        cout<< b << " ";

        if(i == n) {
            return b;
        }
    }
}

int main() {
    
    int n;
    cout<< "Enter a value for N: ";
    cin>> n;

    cout<< endl << "Nth Fibonacci number is: " << NthNo(n);
}