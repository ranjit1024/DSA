# include <bits/stdc++.h>

using namespace std;

void vector_expain(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);

    auto vec_first = nums.begin();
    auto vec_last = nums.end();


    for(auto i : nums){
        cout << i << " ";
    }

}
int main(){
    vector_expain();
    return 0;
}
