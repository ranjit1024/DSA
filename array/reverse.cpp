#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int temp[n];
    for(int i = 0 ; i < n; i++){
         temp[n-i-1] = arr[i];
    }
    for(int i = 0; i < n; i++){
        arr[i] =  temp[i];
    } 
    for(int i = 0 ; i <  n; i++){
        cout << arr[i];
    }

}