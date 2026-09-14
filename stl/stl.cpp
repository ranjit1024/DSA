# include <bits/stdc++.h>
#include <iostream>

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
int main(){
    explain_list();
    return 0;
}
