#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int> arr) {

    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start < end) {

        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }

        mid = start + (end - start) /2;
    }
    
    return start;
}

int binarySearch(vector<int> arr, int start, int end, int k) {

    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(arr[mid] == k) {
            return mid;
        } else if(arr[mid] < k) {
            start = mid + 1;
        } else {
            end = mid -1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main() {

    vector<int> arr = {7, 8, 10, 1, 5, 6};
    int k = 8;
    int pivotIndex = getPivot(arr);

    if(k >= arr[pivotIndex] && k <= arr[arr.size()-1]) {
        cout<< "Index is: " << binarySearch(arr, pivotIndex+1, arr.size()-1, k);
    } else {
        cout<< "Index is: " << binarySearch(arr, 0, pivotIndex-1, k);
    }

}