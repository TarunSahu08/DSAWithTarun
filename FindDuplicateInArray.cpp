#include <iostream>
using namespace std;

int main() {

    int arr[] = {6, 3, 1, 5, 4, 3, 2};
    int size = 7;
    int ans = 0;

    //XOR ing all array elements
    for(int i=0; i<size; i++) {
        ans = ans ^ arr[i];
    }

    //XOR [1, n-1]
    // 6 ^ 3 ^ 1 ^ 5 ^ 4 ^ 3 ^ 2 ^ 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6
    // 3 
    for(int i=1; i<size; i++) {
        ans = ans ^ i;
    }

    cout<< "Duplicate element in array is: " << ans;
}