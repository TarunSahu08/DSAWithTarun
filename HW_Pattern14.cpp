// 1 2 3 4 5 5 5 5 5 5
// 1 2 3 4 * * 4 4 4 4
// 1 2 3 * * * * 3 3 3
// 1 2 * * * * * * 2 2
// 1 * * * * * * * * 1

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1, k = 0;

    while(col <= n) {
        
        //Printing first number block
        int row1 = 1;
        while(row1 <= (n-col+1)) {
            cout<< row1 <<" ";
            row1++;
        }

        //Printing second stars block
        if(col > 1) {
            int row2 = 1;
            k = k + 2;
            while(row2 <= k) {
                cout<< "* ";
                row2++;
            }
        }

        // //Printing third number block
        int row3 = 1;
        while(row3 <= (n-col+1)) {
            cout<< n -col +1<<" ";
            row3++;
        }
        cout<<endl;
        col++;
    }
}