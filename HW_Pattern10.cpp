//         1
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5


#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1;

    while(col <= n) {
        
        //Printing spaces block
        int row = 1;
        while(row <= (n-col)) {
            cout<< "  ";
            row++;
        }

        //Printing stars block
        row = 1;
        while(row <= col) {
            cout<< col <<" ";
            row++;
        }
        cout<<endl;
        col++;
    }
}