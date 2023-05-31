#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int size) {

    int maxNum = INT_MIN;

    for(int i=0; i<size; i++) {
        
        //Different way
        maxNum = max(arr[i], maxNum);
        // if(arr[i] > maxNum) {
        //     maxNum = arr[i];
        // }
    }

    cout<< "Maximum no is: " << maxNum <<endl;
}

void findMin(int arr[], int size) {

    int minNum = INT_MAX;

    for(int i=0; i<size; i++) {
        
        //Different way
        minNum = min(arr[i], minNum);
        // if(arr[i] < minNum) {
        //     minNum = arr[i];
        // }
    }

    cout<< "Minimum no is: " << minNum <<endl;
}

int main() {

    int arr[5] = {25, 65, 45, 52, 14};
    
    findMax(arr, 5);
    findMin(arr, 5);
}