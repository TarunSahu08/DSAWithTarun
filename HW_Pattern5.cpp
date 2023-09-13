// A B C D E
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter a number: ";
    cin>> n;

    int col = 1, count = 0;

    while(col <= n) {
        int row = 1;

        while(row <= n) {
            cout<< (char) ('A' +count) <<" ";
            row++;
            count++;
        }
        cout<<endl;
        col++;
    }
}