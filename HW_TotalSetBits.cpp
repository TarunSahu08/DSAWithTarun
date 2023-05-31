#include <iostream>
using namespace std;

int calculateBits(int num) {

    int ans = 0;

    while(num != 0) {
        
        if(num & 1) {
            ans++;
        }
        num = num >> 1;
    }

    return ans;
}

int main() {

    int a, b;
    cout<< "Enter a number for A: ";
    cin>> a;
    cout<< "Enter a number for B: ";
    cin>> b;

    cout<< "Total set bits are: " << calculateBits(a) + calculateBits(b); 
}