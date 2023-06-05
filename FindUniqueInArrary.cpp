#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 3, 9, 6, 3, 6, 2};
    int size = 7;
    int ans = 0;

    for(int i=0; i<size; i++) {
        ans = ans ^ arr[i];
    }

    cout<< "Unique element in array is: " << ans;
}