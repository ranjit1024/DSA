# include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {4,5,6,7,1};
    for(int i = 0; i < nums.size()-1; i++){
        int minIndx = i;
        for(int j = i+1;  j < nums.size(); j++){
            if(nums[j] < nums[i]){
                minIndx = j;
            }
        }
        int temp = nums[minIndx];
        nums[minIndx] = nums[i];
        nums[i] = temp;
    }
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i];
    }
    
}
