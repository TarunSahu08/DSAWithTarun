#include <iostream>
using namespace std;

void swapAlternateArray(int arr[], int size) {

    for(int i=0; i<size; i+=2) {

        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }

    cout<< endl;
}

int main() {

    int oddArray[5] = {2, 5, 4, 6, 8};
    int evenArray[8] = {5, 4, 1, 2, 9, 6, 11, 3};

    swapAlternateArray(oddArray, 5);
    printArray(oddArray, 5);

    swapAlternateArray(evenArray, 8);
    printArray(evenArray, 8); 
}