#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSolution(vector<int> arr, int n, int m, int mid) {

    int painterCount = 1;
    int unitCount = 0;

    for(int i=0; i<n; i++) {

        if(unitCount + arr[i] <= mid) {
            unitCount += arr[i];
        } else {

            painterCount++;
            if(painterCount > m || arr[i] > mid) {
                return false;
            }
            unitCount = arr[i];
        }
    }

    return true;
}

int main() {

    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
    int m = 22;

    int start = 0;
    int sum = 0;
    int ans = -1;

    for(int a : arr) {
        sum += a;
    }

    int end = sum;
    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(isPossibleSolution(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    cout<< "Answer is: " << ans;
}

