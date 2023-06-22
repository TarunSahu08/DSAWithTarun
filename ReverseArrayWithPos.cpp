#include<iostream>
using namespace std;

void reverseArray(int arr[], int m, int size) {

    int start = m+1, end = size-1;

    while(start < end) {
        swap(arr[start++], arr[end--]);
    }   
}

void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }
}

int main() {

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    reverseArray(arr, 4, 8);
    printArray(arr, 8); 
}