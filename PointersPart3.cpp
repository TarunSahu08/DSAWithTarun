#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga  - NO

    //*p2 = *p2 + 1;
    //kuch change hoga - YES

    **p2 = **p2 + 1;
    //kuch change hoga - YES
}

void increment(int **ptr) {
    (**ptr)++;
}

int main() {

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<< "i: " << i <<endl;
    cout<< "*p: " << *p <<endl;
    cout<< "**p2: " << **p2 <<endl;

    cout<< "&i: " << &i <<endl;
    cout<< "p: " << p <<endl;
    cout<< "*p2: " << *p2 <<endl;

    cout<< "Before update" <<endl;
    cout<< "i: " << i <<endl;
    cout<< "p: " << p <<endl;
    cout<< "p2: " << p2 <<endl;
    update(p2);
    cout<< "After update" <<endl;
    cout<< "i: " << i <<endl;
    cout<< "p: " << p <<endl;
    cout<< "p2: " << p2 <<endl;

    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout<< "num: " << num <<endl;
}