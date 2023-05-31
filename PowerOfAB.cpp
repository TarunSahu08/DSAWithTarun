#include <iostream>
using namespace std;

int powerOfAB() {

    int a, b;

    cout<< "Enter a value for A: ";
    cin>> a;
    cout<< "Enter a value for B: ";
    cin>> b;

    int pow = 1;

    for(int i=1; i<=b; i++) {
        pow = pow * a;
    }

    return pow;
}

int main() {
    
    cout<< "Power is: " << powerOfAB();;
}