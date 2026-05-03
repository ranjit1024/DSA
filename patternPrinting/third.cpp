#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int start = (i % 2 == 0) ? 1 : 0;

        for(int j = 1; j <= i; j++){
            cout << start;
            start = 1 - start; 
        }
        cout << endl;
    }
}