#include<iostream>
using namespace std;

void printArray(int arr[][4], int row, int col) {

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }
}

int main() {

    int arr[3][4];

    cout<< "Enter elements for 2D array row wise: " <<endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cin >> arr[row][col];
        }
    }

    printArray(arr, 3, 4);

    cout<< "Enter elements for 2D array col wise: " <<endl;
    for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }

    printArray(arr, 3, 4);
}