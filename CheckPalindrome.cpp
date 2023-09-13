#include <iostream>
using namespace std;

bool isPalindrome(string s) {

    int start = 0, end = s.size()-1;
    
    while(start < end) {
        if(s[start++] != s[end--]) {
            return false;
        }
    }

    return true;
}

int main() {

    string str;
    cout<< "Enter a string: ";
    cin >> str;

    if(isPalindrome(str)) {
        cout<< "String is Palindrome";
    } else {
        cout<< "String is not Palindrome";
    }
}