# include <bits/stdc++.h>
using namespace std;
bool comparator(int a, int b){
    return a > b;
}
int main(){
  
    int arr[] = {5,2,8,1,3};
    int n = 5;
    sort(arr, arr + n, comparator);
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
}