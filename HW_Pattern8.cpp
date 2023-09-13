// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1;

    while(col <= n) {
        
        //Printing spaces block
        int row1 = 2;
        while(row1 <= col) {
            cout<< "  ";
            row1++;
        }

        //Printing stars block
        int row2 = 1;
        while(row2 <= (n-col+1)) {
            cout<< "* ";
            row2++;
        }
        cout<<endl;
        col++;
    }
}