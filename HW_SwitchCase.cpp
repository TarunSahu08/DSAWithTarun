#include <iostream>
using namespace std;

int main() {

    int amount;
    cout<< "Enter a amount: ";
    cin>> amount;

    switch (1) {
        case 1: {
            cout<< "100s Note: " << amount/100 <<endl;
            amount = amount % 100;
        }
        case 2: {
            cout<< "50s Note: " << amount/50 <<endl;
            amount = amount % 50;
        }
        case 3: {
            cout<< "20s Note: " << amount/20 <<endl;
            amount = amount % 20;
        }
        case 4: {
            cout<< "1s Note: " << amount/1;
        }    
    }
}