// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1;

    while(col <= n) {
        int row = 1;

        while(row <= n) {
            cout<< n - row + 1 <<" ";
            row++;
        }
        cout<<endl;
        col++;
    }
}