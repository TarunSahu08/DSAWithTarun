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

    for(int i=1; i<n; i++) {

        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--; 
        }

        arr[j+1] = temp;
    }

    printArray(arr);
}