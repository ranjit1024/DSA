# include <bits/stdc++.h>
using namespace std;

void mS (vector<int> &arr , int low, int high){
    if (low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high)
}

int main(){
    cout << "Hello World..." << endl;
}
