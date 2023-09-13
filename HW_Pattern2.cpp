// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1, count = 1;

    while(col <= n) {
        int row = 1;

        while(row <= col) {
            cout<< count++ <<" ";
            row++;
        }
        cout<<endl;
        col++;
    }
}