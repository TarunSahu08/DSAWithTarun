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

    for(int i=0; i<n-1; i++) {

        int minIndex = i;

        for(int j=i+1; j<n; j++) {

            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[i], arr[minIndex]);
    }

    printArray(arr);
}