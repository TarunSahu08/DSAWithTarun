#include <iostream>
using namespace std;

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }
}

int main() {

    int arr[10];

    for(int i=0; i<10; i++) {
        arr[i] = 3;
    }

    printArray(arr, 10);
}
