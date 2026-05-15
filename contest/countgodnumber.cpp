# include <iostream>
# include <vector>

using namespace std;

int main(){
   long long int n;
   cin >> n;
   int ans = 0;
   vector<long long> x(n);
   for(int i = 0; i <= n; i++){
    cin >> x[i];
   }
  
   for(int i = 0; i <= n ; i++){
    if(18 % x[i] == 0 or x[i] % 45 == 0){
      ans = ans +  1;

    }
   }
   cout << ans;
}