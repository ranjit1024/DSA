# include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums = {7,8,4,3,1};

    for (int i = nums.size()-1; i >= 0; i--){
        for(int j = 0; j <= i - 1; j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
        cout << endl;
    }

    for(int i = 0; i <  nums.size(); i++){
        cout << nums[i];
    }
    cout << endl;
}
