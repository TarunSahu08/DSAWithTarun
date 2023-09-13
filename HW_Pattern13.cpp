//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1;

    while(col <= n) {
        
        //Printing spaces block
        int row1 = 1;
        while(row1 <= (n-col)) {
            cout<< "  ";
            row1++;
        }

        //Printing first stars block
        int row2 = 1;
        while(row2 <= col) {
            cout<< row2 <<" ";
            row2++;
        }

        //Printing second stars block
        int row3 = 2;
        while(row3 <= col) {
            cout<< col -row3 +1<<" ";
            row3++;
        }
        cout<<endl;
        col++;
    }
}