# include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,4,2,23,23};
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int highest = nums.back();
    int second_highest = -1;

    for(auto i : nums){
        cout << i << " ";
    }

    for(int i = n - 2 ; i >= 0; i--){
        if(nums[i] != highest){
            second_highest = nums[i];
            break;
        }
    }
    cout << endl;
    cout << second_highest;
    cout << endl;
}