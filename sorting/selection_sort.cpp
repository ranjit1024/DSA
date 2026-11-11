# include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums = {5,6,8,9,1};

    for(int i = 0; i < nums.size() - 1; i++){
        int minIndex = i;
        for(int j = i; j < nums.size(); j++){
            if(nums[j] < nums[minIndex]){
                minIndex = j;
            }
        }
        int temp = nums[minIndex];
        nums[minIndex] = nums[i];
        nums[i] =  temp;
    }

    for(int i = 0; i < nums.size(); i++){
        cout <<  nums[i];
    }
}
