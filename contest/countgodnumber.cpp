# include <iostream>
# include <vector>

using namespace std;

int main(){
   int n;
   cin >> n;

   vector<int> x(n);
   for(int i = 1; i <= n; i++){
    cin >> x[i];
   }
   cout << "Value" << endl;
   for(int i = 1; i <= n ; i++){
    cout << x[i] << endl;
    
   }

}