#include <iostream>
using namespace std;

int calculateAP(int n) {

    return ((3 * n) +7);
}

int main() {

    int num;
    cout<< "Enter a number: ";
    cin>> num;

    cout<< "AP result is: " <<calculateAP(num);
}