// A B C D E
// B C D E F
// C D E F G
// D E F G H
// E F G H I

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
            cout<< (char) ('A' +col +row -2) <<" ";
            row++;
        }
        cout<<endl;
        col++;
    }
}