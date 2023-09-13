#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int i=2;
    bool isPrime = true;

    while(i < n) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }

    if(isPrime) {
        cout<<n << " is a Prime number";
    } else {
        cout<<n << " is not a Prime number";
    }
}