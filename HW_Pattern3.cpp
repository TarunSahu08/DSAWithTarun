// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1;

    while(col <= n) {
        int row = 1;

        while(row <= col) {
            cout<< row +col -1 <<" ";
            row++;
        }
        cout<<endl;
        col++;
    }
}