#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    
    int start=0, end=size-1;

    while(start<end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int main() {

    int size;
    cout<< "Enter a size of Array: ";
    cin>> size;

    int arr[100];
    cout<< "Enter elements for Array: " <<endl;

    for(int i=0; i<size; i++) {
        cin>> arr[i];
    }

    cout<< "Before Reverse" <<endl;
    printArray(arr, size);

    reverseArray(arr, size);

    cout<< "After Reverse" <<endl;
    printArray(arr, size);
}