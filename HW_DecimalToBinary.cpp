#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int num, ans=0, i=0;
    cout<< "Enter a number: " <<endl;
    cin>> num;

    while(num != 0) {
        int bit = num & 1;
        ans = (bit * pow(10, i)) + ans;
        i++;
        num = num >> 1;
    }

    cout<< "Binary is: " <<ans;
}