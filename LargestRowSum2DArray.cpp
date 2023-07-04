#include<iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[][4], int row, int col) {

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }
}

int findLargetRow(int arr[][4], int row, int col) {

    int maxi = INT_MIN, rowIndex = 0;

    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum += arr[i][j];
        }

        if(sum > maxi) {
            maxi = sum;
            rowIndex = i+1;
        }
    }

    return rowIndex;
}

int main() {

    int arr[3][4];

    cout<< "Enter elements for 2D array: " <<endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cin >> arr[row][col];
        }
    }

    printArray(arr, 3, 4);
    cout<< "Largest row is : " << findLargetRow(arr, 3, 4);
}