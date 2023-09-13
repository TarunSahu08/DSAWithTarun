#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1, 4, 3, 2, 5};
    int n = 5;
    int size = 5;

    for(int i=0; i<size; i++) {
        
        for(int j=i+1; j<size; j++) {
            if((arr[i] + arr[j]) == n) {
                cout<< min(arr[i], arr[j]) << " ";
                cout<< max(arr[i], arr[j]) <<endl;
            }
        }
    }
}