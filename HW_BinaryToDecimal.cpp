#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int num, i=0, ans=0;
    cout<< "Enter a Binary number: ";
    cin>> num;

    while(num != 0) {
        int digit = num % 10;
        if(digit == 1) {
            ans = ans + (pow(2, i));
        }
        i++;
        num /= 10;
    }

    cout<< "Decimal is: " <<ans;
}