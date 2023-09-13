// NEED TO OPTIMIZE
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> arr) {

    for(int i=0; i<arr.size(); i++) {
        cout<< arr[i] << " ";
    }
}

int main() {

    vector<int> arr = {1, 2, 3, 1, 2, 3};
    int size = 6;
    int n = 6;
    vector<int> ans;

    sort(arr.begin(), arr.end());

    for(int i=0; i<size; i++) {
        
        for(int j=i+1; j<size; j++) {

            for(int k=j+1; k<size; k++) {
                if((arr[i] + arr[j] + arr[k]) == n) {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[k]);
                    printArray(ans);
                    exit(0);
                }
            }
        }
    }
}