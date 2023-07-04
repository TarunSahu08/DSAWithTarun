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

bool isPresent(int arr[][4], int row, int col, int target) {

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(target == arr[i][j])
                return true;
        }
    }

    return false;
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

    cout<< "Enter target to search: " <<endl;
    int target;
    cin>> target;

    if(isPresent(arr, 3, 4, target))
        cout<< "Target found";
    else
        cout<< "Target not found";

}