#include <iostream>
using namespace std;

int factorial(int num) {

    int ans=1;

    for(int i=1; i<=num; i++) {
        ans = ans * i;
    }

    return ans;
}

int nCr(int n, int r) {

    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);

    return num / denom;
}

int main() {

    int n, r;
    cout<< "Enter a value for N: ";
    cin>> n;
    cout<< "Enter a value for R: ";
    cin>> r;

    cout<< "nCr is: " <<nCr(n, r);
}