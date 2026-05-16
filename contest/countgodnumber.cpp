# include <iostream>
# include <vector>

using namespace std;

int main(){
    int n;
   cin >> n;
   int ans = 0;
   vector<long long> x(n);
   for(int i = 0; i < n; i++){
    cin >> x[i];
   }
  
   for(int i = 0; i < n ; i++){
    if(x[i] % 45 == 0){
      ans++;
    }
    else if(x[i] != 0 and 18 % x[i] == 0){
      ans++;
    }
   }
   cout << ans;
}