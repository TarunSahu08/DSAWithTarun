#include<iostream>
using namespace std;

int main() {

    int num = 5;

    cout<< "Address of num is: " << &num <<endl;
    cout<< "Value of num is: " << num <<endl;

    int *ptr = &num;
    (*ptr)++;

    cout<< "Value of pointer is: " << *ptr <<endl;
    cout<< "Address at pointer is: " << ptr <<endl;
    cout<< "Value of num is: " << num <<endl;

    cout<< "Size of pointer: " << sizeof(ptr) <<endl;
    cout<< "Size of num: " << sizeof(num) <<endl;

    int *p = ptr;
    cout<< "Value of p is: " << *p <<endl;
    cout<< "Address at p is: " << p <<endl;

    ptr++;
    cout<< "Address of pointer after increment: " << ptr <<endl;
}