#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr) {

    for(int i=0; i<arr.size(); i++) {
        cout<< arr[i] << " ";
    }
}

int main() {

    vector<int> arr = {25, 10, 5, 65, 45, 85};
    int n = arr.size();
    bool isSwapped = false;

    for(int i=1; i<n; i++) {

        for(int j=0; j<n-i; j++) {

            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }

        if(!isSwapped) 
            break;
    }

    printArray(arr);
}