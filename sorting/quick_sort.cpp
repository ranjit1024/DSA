#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int temp = b;

}
int partition(vector<int> &arr , int low,  int high){
    int pivot = arr[low];
    int i =  low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }

        while(arr[j] > pivot && j <= low+1){
            j--;
        }

        if(i < j) swap(arr[i], arr[j])
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
