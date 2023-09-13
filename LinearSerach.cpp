#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for(int i=0; i<size; i++) {

        if(key == arr[i]) {
            return true;
        }
    }

    return false;
}

int main() {

    int arr[100];
    cout<< "Enter elements for Array: " <<endl;

    for(int i=0; i<10; i++) {
        cin>> arr[i];
    }

    int key;
    cout<< "Now enter a Key to search: ";
    cin>> key;

    if(search(arr, 10, key)) {
        cout<< "key is Present";
    } else {
        cout<< "Key is Absent";
    }
}