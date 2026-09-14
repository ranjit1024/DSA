#include <algorithm>
# include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;
void pair_explain (){
    pair<int, int> pair = {1,1};
}
void vector_expain(){
    vector<int> vec1 = {1,2,3,4};
    vec1.insert(vec1.begin(), 21);

    for(auto i : vec1){
        cout << i << " ";
    }
    cout << endl;
}
void explain_list(){
    list<int>ls = {2,3};
    ls.push_front(1);
    for(auto l : ls){
        cout << l;
    }
    cout << endl;
}
void explain_stsck(){
    // LIFO
    stack<int> st;
    st.push(12);
    st.push(34);
    st.push(100);
    st.push(45);
    st.push(65);

    while(st.empty() == false){
        cout << st.top() << " ";
        st.pop();
    }
}
void explain_queue(){
    //FIFO
    queue<int> line;
    line.push(12);
    line.push(34);
    line.push(45);

    while (line.empty() == false) {
        cout << line.front() << " ";
        line.pop();
    }
    cout << endl;
}
void p_Queue(){
    priority_queue<int> p_line;
    p_line.push(45);
    p_line.push(23);
    p_line.push(1);

    cout << p_line.top() << endl;
}
void explain_set(){
    set <int> s;
    s.insert(2);
    s.insert(34);
    s.insert(2);
    s.insert(25);
    s.insert(12);
    s.insert(54);


    auto it  = s.find(2);
    auto lb = s.lower_bound(10);
    auto ub = s.upper_bound(12);
    cout << *ub << endl;
}
void explain_multiset(){
    multiset<int> marks = {1,1,1,1,1,2,3,3};
    marks.insert(23);

    for(auto it: marks){
        cout << it << " ";
    }
    cout << endl;
    marks.find(1);
    marks.erase(marks.find(1));

    for(auto it : marks){
        cout << it << " ";
    }
    cout << endl;
}
void explain_unorderset(){
    unordered_set<int> marks;
    marks.insert(12);
    marks.insert(45);
    marks.insert(12);
    marks.insert(100);

    for(auto mi : marks){
        cout << mi << " ";
    }

    cout << endl;
}
void expain_map(){
    map<int, string> mpp;
    mpp[1] = "ABC";
    mpp[2] = "BCD";
    mpp[3] = "cat";
    mpp.insert({4, "Ranjit"});

    auto it = mpp.find(4);
    cout << (*it).second;
}
void expain_unsorted_map(){
    unordered_map<int,int> mp;
    mp.insert({12,12});
}
void explain_multimap(){
    multimap<int , char> mmp;
    mmp.insert({1, '1'});
    mmp.insert({1, '1'});
    mmp.insert({1, '1'});
    auto it = mmp.equal_range(1);
    for(auto i = it.first; i != it.second; i++){
        cout << (*i).first;
    }
}
void explain_Sort(){
    int arr[3] = {6,7,4};

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    sort(arr, arr+ 3);
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    ////
    vector<int> vec = {56,78,23,2,1,234};
    sort( vec.begin(), vec.end());
    for(auto v : vec){
        cout << v <<  " ";
    }
    cout << endl;
}

int main(){
    explain_Sort();

    return 0;
}
