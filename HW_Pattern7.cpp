// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1;

    while(col <= n) {
        int row = 1;

        while(row <= (n-col+1)) {
            cout<< "* ";
            row++;
        }
        cout<<endl;
        col++;
    }
}