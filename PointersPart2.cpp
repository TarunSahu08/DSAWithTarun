#include<iostream>
using namespace std;

void print(int *p) {

    cout<< "In print function: " << *p <<endl;
}

void update(int *p) {

    *p = *p + 1;
    cout<< "In update function: " << *p <<endl;
}

int getSum(int *arr, int n) {

    cout<< "Size of arr is: " << sizeof(arr) <<endl;

    int sum = 0;

    for(int i=0; i<n; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {

    //Pointer with Array
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout<< "arr: " << arr <<endl;
    cout<< "Address of first index: " << &arr[0] <<endl;
    cout<< "Address of second index: " << &arr[1] <<endl;
    cout<< "ptr: " << *(ptr + 2) <<endl;
    cout<< "New way: " << 4[arr] <<endl;
    cout<< "Just ptr: " << ptr <<endl;

    //Pointer with Char
    char ch[6] = "abcde";

    cout<< "ch: " << ch <<endl;

    char *c = &ch[0];

    cout<< "*c: " << *c <<endl; //a
    cout<< "c: " << c <<endl; //abcde

    char temp = 'z';
    char *p = &temp;

    cout<< "temp: " << temp <<endl;

    //Pointers with Functions

    int value = 5;
    int *p2 = &value;

    print(p2);

    cout<< "Before update function: " << *p2 <<endl;
    update(p2);
    cout<< "After update function: " << *p2 <<endl;

    int arr2[6] = {10, 20, 30, 40, 50, 60};
    
    cout<< "Sum is: " << getSum(arr2+3, 3) <<endl;
}