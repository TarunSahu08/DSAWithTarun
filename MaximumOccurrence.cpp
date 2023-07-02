#include<iostream>
using namespace std;

int main() {

    string s = "output";
    int temp[26] = {0};

    for(char c : s) {
        temp[c-'a']++;
    }

    int index = 0;
    int maxi = -1;

    for(int i=0; i<26; i++) {
        if(temp[i] > maxi) {
            index = i;
        }
        maxi = max(maxi, temp[i]);
    }

    char ans = 'a' + index;
    cout<< "Maximum Occurrence is: " << ans;
}