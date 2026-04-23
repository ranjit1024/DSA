#include <iostream>

using namespace std;

int main(){
    int n = 121;
    int ans;
    while(n != 0){
        n = n / 10;
        cout << n;
    }
}