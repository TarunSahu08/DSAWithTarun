// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

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
            cout<< (char) ('A' +row -1) <<" ";
            row++;
        }
        cout<<endl;
        col++;
    }
}