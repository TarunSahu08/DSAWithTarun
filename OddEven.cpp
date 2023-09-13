#include <iostream>
using namespace std;

bool isEven(int num) {

    if(num & 1) {
        return 0;
    }
    
    return 1;
}

int main() {

    int num;
    cout<< "Enter a number: ";
    cin>> num;

    if(isEven(num)) {
        cout<< num <<" is Even";
    } else {
        cout<< num <<" is Odd";
    }
}