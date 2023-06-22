#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseVector(vector<int> vec) {

    int start = 0, end = vec.size()-1;

    while(start < end) {
        swap(vec[start++], vec[end--]);
    }
    
    return vec;
}

void printVector(vector<int> vec) {
    for(int i : vec) {
        cout<< i <<" ";
    }
}

int main() {

    vector<int> vec = {1, 5, 8, 10, 15};

    vector<int> ans = reverseVector(vec);
    printVector(ans);
}