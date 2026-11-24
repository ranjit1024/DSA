# include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,4,4,3,12,23,45,32};
    int max = nums[0];
    int second_highest = -1;
    for(int i = 0; i < nums.size(); i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > second_highest && nums[i] != max){
            second_highest = nums[i];
        }
    }
   
    cout << second_highest << endl;
}