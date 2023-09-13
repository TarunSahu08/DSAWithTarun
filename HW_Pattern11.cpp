// 1 2 3 4 5
//   2 3 4 5
//     3 4 5
//       4 5
//         5

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1;

    while(col <= n) {
        
        //Printing spaces
        int row1 = 2;
        while(row1 <= col) {
            cout<< "  ";
            row1++;
        }

        //Printing stars block
        int row2 = 1;
        while(row2 <= (n-col+1)) {
            cout<< col +row2 -1  <<" ";
            row2++;
        }
        cout<<endl;
        col++;
    }
}