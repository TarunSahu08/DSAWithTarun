#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeArrays(vector<int> vec1, vector<int> vec2) {

    int i = 0, j = 0, k = 0;
    vector<int> ans;

    while(i<vec1.size() && j<vec2.size()) {

        if(vec1[i] < vec2[j]) {
            ans.push_back(vec1[i++]);
        } else {
            ans.push_back(vec2[j++]);
        }
    }

    while(i<vec1.size()) {
        ans.push_back(vec1[i++]);
    }

    while(j<vec2.size()) {
        ans.push_back(vec2[j++]);
    }

    return ans;
}

void printArray(vector<int> vec) {
    
    for(int i : vec) {
        cout<< i << " ";
    }
}

int main() {

    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {2, 3, 6};
    
    vector<int> ans = mergeArrays(vec1, vec2);
    printArray(ans);
}