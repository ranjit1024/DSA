#include <bits/stdc++.h>
using namespace std;


int main(){
    int n = 6;
    int arr[n] = {1,2,3,4,5,6};  
    int left = 0;
    int right = n-1;
    cout << "L" <<  left << endl;
    cout << "R" << right << endl;
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left ++;
        right--;
        cout << "L" <<  left << endl;
        cout << "R" << right << endl;

    }
   
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
}