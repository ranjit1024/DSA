# include <iostream>
using namespace std;
int factoraial(int k){
    int ans = 1;
    for(int i = 1; i <= k; i++){
        ans *= i;
    }
    return ans;
}
int main(){
    cout << factoraial(5)<< endl;
}