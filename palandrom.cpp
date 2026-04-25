#include <iostream>

using namespace std;

int main(){
    long long  n ;
    cin >> n;
    int ans  = 0;
    int digit = n;
    while(n != 0){
        int digit = n % 10;
        ans = ans * 10 +  digit;
        n = n / 10;
    }
    if(digit == ans){
        cout << "YES" <<  endl;
    }
    else{
        cout << "NO" <<  endl;
    }

}