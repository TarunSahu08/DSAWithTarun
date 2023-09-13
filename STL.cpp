#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

int main() {

    array<int, 4> arr = {5, 6, 1, 2};

    cout<< "Array->" <<endl;
    for(int i=0; i<arr.size(); i++) {
        cout<< arr[i] << " ";
    }
    
    cout<< endl << "Element at 2nd index: " << arr.at(2) <<endl;
    cout<< "Is empty or not: " << arr.empty() <<endl;
    cout<< "First element: " << arr.front() <<endl;
    cout<< "Last element: " << arr.back() <<endl <<endl;

    
    vector<int> vec(5, 2);
    
    cout<< "Vector->" <<endl;
    cout<< "Capacity : " << vec.capacity() <<endl;

    vec.push_back(3);
    cout<< "Capacity : " << vec.capacity() <<endl;
    cout<< "Size : " << vec.size() <<endl;
    cout<< "Element at 3rd index : " << vec.at(5) <<endl;
    cout<< "First element: " << vec.front() <<endl;
    cout<< "Last element: " << vec.back() <<endl;

    cout<< "Before pop: " <<endl;
    for(int i : vec) {
        cout<< i << " ";
    }
    vec.pop_back();

    cout<< endl << "After pop: " <<endl;
    for(int i : vec) {
        cout<< i << " ";
    }
    vec.pop_back();
    cout<< endl <<endl;


    deque<int> deq;

    deq.push_back(5);
    deq.push_front(3);

    cout<< "Deque->" <<endl;
    cout<< "First element is: " << deq.front() <<endl;
    cout<< "Last element is: " << deq.back() <<endl;
    cout<< "Element at 0th index: " << deq.at(0) <<endl;

    deq.erase(deq.begin(), deq.end());
    cout<< "Size: " << deq.size() <<endl <<endl;


    list<int> lst (5, 100);
    lst.push_back(3);
    lst.push_front(2);

    cout<< "List->" <<endl;
    for(int i : lst) {
        cout<< i << " ";
    }

    lst.erase(lst.begin());
    cout<< endl << "After erase:" <<endl;
    for(int i : lst) {
        cout<< i << " ";
    }
    cout<< endl <<endl;


    stack<string> st;
    st.push("Tarun");
    st.push("Sahu");
    st.push("DSA");

    cout<< "Stack->" <<endl;
    cout<< "Top element: " << st.top() <<endl;

    st.pop();
    cout<< "Top element: " << st.top() <<endl;
    cout<< "Size: " << st.size() <<endl;
    cout<< "Empty or not: " << st.empty() <<endl <<endl;
    
    
    queue<string> que;
    que.push("Tarun");
    que.push("Sahu");
    que.push("DSA");

    cout<< "Queue->" <<endl;
    cout<< "Top element: " << que.front() <<endl;

    que.pop();
    cout<< "Top element: " << que.front() <<endl;
    cout<< "Last element: " << que.back() <<endl;
    cout<< "Size: " << que.size() <<endl;
    cout<< "Empty or not: " << que.empty() <<endl <<endl;


    priority_queue<int> decQue;
    decQue.push(1);
    decQue.push(5);
    decQue.push(3);
    decQue.push(2);
    
    int n = decQue.size();
    cout<< "Priority Queue->" <<endl;
    for(int i=0; i<n; i++) {
        cout<< decQue.top() << " ";
        decQue.pop();
    }

    priority_queue<int, vector<int>, greater<int>> incQue;
    incQue.push(1);
    incQue.push(5);
    incQue.push(3);
    incQue.push(2);
    
    n = incQue.size();
    cout<< endl;
    for(int i=0; i<n; i++) {
        cout<< incQue.top() << " ";
        incQue.pop();
    }

    cout<< endl << "Empty or not: " <<incQue.empty() <<endl <<endl;


    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(5);
    s.insert(6);
    s.insert(2);
    s.insert(4);
    s.insert(1);

    cout<< "Set->" <<endl;
    for(int i : s) {
        cout<< i << " ";
    }

    cout<< endl << "Element present or not: " << s.count(7) <<endl;
    cout<< "Element present or not: " << s.count(6) <<endl;

    set<int>::iterator itr = s.find(4);

    for(auto it=itr; it!=s.end(); it++) {
        cout<< *it << " ";
    }
    cout<< endl <<endl;


    map<int, string> mp;
    mp[5] = "Tarun";
    mp[8] = "Sahu";
    mp[3] = "DSA";

    mp.insert( {4, "Google"} );

    cout<< "Map->" <<endl;
    for(auto m : mp) {
        cout<< m.first << " " << m.second <<endl;
    }

    cout<< "Finding: " << mp.count(2) <<endl;

    mp.erase(3);
    cout<< "After erase: " <<endl;
    for(auto m : mp) {
        cout<< m.first << " " << m.second <<endl;
    }

    auto itr2 = mp.find(5);

    for(auto it=itr2; it!=mp.end(); it++) {
        cout<< (*it).first << " ";
    }
    cout<< endl <<endl;


    vector<int> vec2;
    vec2.push_back(1);
    vec2.push_back(4);
    vec2.push_back(8);
    vec2.push_back(2);
    vec2.push_back(7);

    cout<< "Algorithm->" <<endl; 
    cout<< "Binary Search: " << binary_search(vec2.begin(), vec2.end(), 4) <<endl;
    cout<< "Lower bound: " << lower_bound(vec2.begin(), vec2.end(), 8)-vec2.begin() <<endl;
    cout<< "Uper bound: " << upper_bound(vec2.begin(), vec2.end(), 8)-vec2.begin() <<endl;

    int a = 4, b = 2;
    cout<< "Min: " << min(a, b) <<endl;
    cout<< "Max: " << max(a, b) <<endl;

    swap(a, b);
    cout<< "a: " << a << "  b: " << b <<endl;

    string str = "abcd";
    reverse(str.begin(), str.end());
    cout<< "After reverse: " << str <<endl;

    rotate(vec2.begin(), vec2.begin()+2, vec2.end());
    for(int i : vec2) {
        cout<< i << " ";
    }
}   