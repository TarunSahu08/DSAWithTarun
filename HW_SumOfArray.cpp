#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {5, 10, 8, 5, 2};

    int sum = 0;

    for(int i=0; i<5; i++) {
        sum += arr[i];
    }

    cout<< "Sum of array is: " << sum;
}