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

void printArrayLikeWave(int arr[][4], int row, int col) {

    for(int i=0; i<col; i++) {

        if(i & 1) {
            for(int j=row-1; j>=0; j--) {
                cout<< arr[j][i] << " ";
            }
        } else {
            for(int j=0; j<row; j++) {
                cout<< arr[j][i] << " ";
            }
        }
    }
}

int main() {

    int arr[3][4];

    cout<< "Enter element for 2D array: " <<endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cin >> arr[row][col];
        }
    }
    
    cout<< "2D array is: " <<endl;
    printArray(arr, 3, 4);

    cout<< "Printing array like a wave: " << endl;
    printArrayLikeWave(arr, 3, 4);
}