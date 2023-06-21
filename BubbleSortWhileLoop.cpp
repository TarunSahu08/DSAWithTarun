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
    int i=1;

    while(i < n) {

        int j=0;

        while(j < n-i) {

            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }

            j++;
        }

        i++;

        if(!isSwapped) 
            break;
    }

    printArray(arr);
}