#include <iostream>
using namespace std;

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }
}

int main() {

    int arr[7] = {1, 2, 2, 1, 0, 1, 1};
    int size = 7;
    int left = 0;
    int right = size-1;
    int i = 0;

    while(i <= right) {
        if(arr[i] == 0) {
            swap(arr[i], arr[left]);
            left++;
            i++;
        }
        else if(arr[i] == 2) {
            swap(arr[i], arr[right]);
            right--;
        }
        else if(arr[i] == 1) {
            i++;
        }
    }
    
    printArray(arr, size);
}