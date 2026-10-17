# include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "ABC";
    string  all_permutatino[] = {""};
    sort(s.begin(),  s.end());

    do{

        cout << s << "\n";
        if(s == "BCA"){
            cout << "Match";
        }
    }while(next_permutation(s.begin(), s.end()));


    cout << s << endl;
}