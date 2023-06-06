#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end  = mid - 1;
        }

        mid  = start + (end - start) / 2;
    }

    return -1;
}

int main() {

    int oddArr[5] = {4, 5, 8, 10, 14};
    int evenArr[8] = {1, 2, 4, 8, 12, 17, 22, 28};

    cout<< "Odd Array index: " << binarySearch(oddArr, 5, 5) <<endl;
    cout<< "Even Array index: " << binarySearch(evenArr, 8, 4);
}