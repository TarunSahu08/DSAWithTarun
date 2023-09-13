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

void printRowSum(int arr[][4], int row, int col) {

    cout<< "Sum of row wise 2D array: " <<endl;
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<4; j++) {
            sum += arr[i][j];
        }
        cout<< "Sum of row " <<i+1 << " : " <<sum << endl;
    }
}

void printColSum(int arr[][4], int row, int col) {

    cout<< "Sum of col wise 2D array: " <<endl;
    for(int i=0; i<col; i++) {
        int sum = 0;
        for(int j=0; j<row; j++) {
            sum += arr[j][i];
        }
        cout<< "Sum of col " <<i+1 << " : " <<sum << endl;
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
    printRowSum(arr, 3, 4);
    
    cout<< "Enter elements for 2D array col wise: " <<endl;
    for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }

    printArray(arr, 3, 4);
    printColSum(arr, 3, 4);
}