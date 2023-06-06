#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end) {

        if(arr[mid] == key) {
            end = mid - 1;
            ans = mid;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end  = mid - 1;
        }

        mid  = start + (end - start) / 2;
    }

    return ans;
}

int lastOcc(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end) {

        if(arr[mid] == key) {
            start = mid + 1;
            ans = mid;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end  = mid - 1;
        }

        mid  = start + (end - start) / 2;
    }

    return ans;
}

int main() {

    int oddArr[5] = {1, 2, 2, 2, 3};
    int evenArr[8] = {1, 2, 3, 3, 3, 3, 3, 3};

    cout<< "Total No of Occurrence: " << (lastOcc(oddArr, 5, 2) - firstOcc(oddArr, 5, 2)) + 1 <<endl;
    cout<< "Total No of Occurrence: " << (lastOcc(evenArr, 8, 3) - firstOcc(evenArr, 8, 3)) + 1 <<endl;
}