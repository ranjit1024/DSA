# include<bits/stdc++.h>

using namespace std;

bool isSorted (int arr[], int n){
    for(int i = 1 ; i < n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
      
    } 
    return true;
}

int main(){
    int arr[6] = {1,2,5,4,6,7};
    cout << isSorted(arr, 6) << endl;
    cout << "fadf";
}