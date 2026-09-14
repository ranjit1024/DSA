# include <bits/stdc++.h>

using namespace std;

void vector_expain(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(12);
    nums.push_back(34);

    nums.erase(nums.begin());
    for(auto i : nums){
        cout << i << " ";
    }

}

int main(){
    vector_expain();
    return 0;
}
