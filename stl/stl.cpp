# include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <queue>

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
int main(){
    explain_set();

    return 0;
}
