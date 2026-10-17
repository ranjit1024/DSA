# include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcde";
    string target = "hkjlj";
    string ds = s + s ;
    cout << ds;
    cout << ds.find(target)  << endl;
}