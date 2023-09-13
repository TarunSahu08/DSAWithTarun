#include<iostream>
#include<vector>
#include<deque>
using namespace std;

void printSum(deque<int> vec) {
    
    for(int i : vec) {
        cout<< i << " ";
    }
}

deque<int> getSum(vector<int> vec1, int n, vector<int> vec2, int m) {

    deque<int> totalSum;
    int carry = 0;
    int i = n-1, j = m-1;

    while(i>=0 && j>=0) {

        int value = vec1[i--] + vec2[j--] + carry;
        carry = value / 10;
        value = value % 10;
        
        totalSum.push_front(value);
    }

    while(i>=0) {

        int value = vec1[i--] + carry;
        carry = value / 10;
        value = value % 10;
        
        totalSum.push_front(value);
    }

    while(j>=0) {

        int value = vec2[j--] + carry;
        carry = value / 10;
        value = value % 10;
        
        totalSum.push_front(value);
    }

    while(carry != 0) {

        int value = carry;
        carry = value / 10;
        value = value % 10;
        
        totalSum.push_front(value);
    }

    return totalSum;
}

int main() {

    vector<int> vec1 = {6, 8, 9};
    vector<int> vec2 = {8, 4, 5, 8, 7, 9};
    int n = vec1.size();
    int m = vec2.size();

    deque<int> sum = getSum(vec1, n, vec2, m);
    printSum(sum);
}