//       1
//     2 3
//   4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1, count = 1;

    while(col <= n) {
        
        //Printing spaces
        int row1 = 1;
        while(row1 <= (n-col)) {
            cout<< "  ";
            row1++;
        }

        //Printing stars block
        int row2 = 1;
        while(row2 <= col) {
            cout<< count++ <<" ";
            row2++;
        }
        cout<<endl;
        col++;
    }
}