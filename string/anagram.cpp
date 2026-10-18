#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "anagram";
    string t = "nagaram";
    string ds = s  + s;
    cout << ds << endl;
    if(ds.find(t) != string::npos){
        cout << " found";
    }else{
        cout << "Not Found";
    }
    cout << "Hello World" << endl;

}