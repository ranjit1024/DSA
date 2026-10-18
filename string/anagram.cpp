#include <bits/stdc++.h>
using namespace std;

int main(){
    int s_hash[26] = {0} ;
    string name = "ranjit";
    for(int i = 0; i < 25; i++){
        s_hash[name[i] - 'a'] ++;
    }
    for(int i = 0 ; i <  26; i++){
        cout << s_hash[i] << " " ;
    }

}