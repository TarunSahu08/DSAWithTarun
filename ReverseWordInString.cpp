#include<iostream>
using namespace std;

int main() {

    string s = "the sky is blue";
    
    int start = 0, end = s.size()-1;

    while(start < end) {
        swap(s[start++], s[end--]);
    }

    int space = s.find(" ");
    start = 0, end = space - 1;

    while(start < s.length()-1) {
        
        while(start <= end) {
            swap(s[start++], s[end--]);
        }

        
        if(s.find(" ", space+1) > start) {
            start = space+1;
            space = s.find(" ", space+1);
            if(space > 0)
                end = space - 1;
            else {
                end = s.length() - 1;
            }
        }
    }

    cout<< "After reverse words in string: " <<s;
}