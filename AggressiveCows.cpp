#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int> stalls, int k, int mid) {

    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i=0; i<stalls.size(); i++) {

        if(stalls[i] - lastPos >= mid) {

            cowCount++;

            if(cowCount==k) {
                return true;
            }
            
            lastPos = stalls[i];
        }
    }

    return false;
}

int main() {

    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;

    sort(stalls.begin(), stalls.end());

    int start = 0;
    int maxi = 0;

    for(int s : stalls) {
        maxi = max(maxi, s);
    }

    int end = maxi;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end) {

        if(isPossibleSolution(stalls, k, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    cout<< "Answer is: " <<ans;
}