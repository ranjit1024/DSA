#include<bits/stdc++.h>
#include <iostream>
#include <ostream>
#include <utility>
using namespace std;
void explainPair(){
    pair <int, int> pr1 = {12,12};
    cout << pr1.first <<  pr1.second << endl;
}
void explainVector(){
    vector<int> vec;
    vec.push_back(12);
    vec.push_back(2);
    vec.push_back(4);

    //
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i];
    }
}
int main(){
    int res = pow(5, 2);
    explainVector();

}
