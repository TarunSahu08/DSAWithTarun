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

int main() {

    vector<int> arr = {8, 10, 17, 1, 3};

    int pivotIndex = getPivot(arr);

    cout<< "Pivot index is: " <<pivotIndex;
}