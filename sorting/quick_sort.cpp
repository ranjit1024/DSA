#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr , int low,  int high){
    int pivot = arr[low];
    int i =  low;
    int j = high;

    while(i < j){
        
    }
}
void Qs(vector <int> &arr , int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        Qs(arr, low, pIndex - 1);
        Qs(arr,  pIndex + 1, high)
    }
}
int main (){
    vector <int> arr  = {4,6,2,5,7,9,1,3};

}
