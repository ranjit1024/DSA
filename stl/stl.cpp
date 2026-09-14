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

int main(){
    explain_queue();

    return 0;
}
