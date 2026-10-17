# include<bits/stdc++.h>
using namespace std;
string rotate(string s){
    char first = s[0];
    string sub = s.substr(1, s.size()-1);
    sub.push_back(first);
    return sub;
}
int main(){
    string s = "abcde";
    string target = "cdeab";
    string first = rotate(s);
    string second = rotate(first);
    if(second == target) {
        cout << "Matched";
    }
  
}