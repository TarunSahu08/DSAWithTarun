#include <iostream>
using namespace std;

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }
}

int main() {

    int arr[10] = {0, 1, 1, 0, 1, 0, 1, 0, 1, 0};
    int size = 10;
    int left = 0, right = size-1;

    while(left < right) {

        if(arr[left] == 0) {
            left++;
        } else if(arr[right] == 1) {
            right--;
        } else {
            swap(arr[left], arr[right]);
            left++, right--;
        }
    }
    
    printArray(arr, size);
}