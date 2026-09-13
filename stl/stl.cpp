#include<bits/stdc++.h>
#include <iostream>
#include <iterator>
using namespace std;
void explainPair(){
    pair <int, int> pr1 = {12,12};
    cout << pr1.first <<  pr1.second << endl;
}

void explainVector(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(12);

    // vector <int> :: iterator begin_itr = vec.begin();
    // vector <int> :: iterator end_itre = vec.end();

    // for (vector <int>::iterator i = begin_itr; i <end_itre; i++){
    //     cout << *i << endl;
    // }
    //
    auto begin_itr = vec.begin();
    auto end_itr = vec.end();
    for(auto i = begin_itr; i < end_itr; i++){
        cout << *i;
    }
}
int main(){
    int res = pow(5, 2);
    explainVector();

}
