# include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;

        cin >> n;
        long long  array[n];

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        
        long long  pair;

        long long  ans = 0;
        cin >> pair;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n ;j++){
                if(array[i] + array[j] == pair and i !=j){
                    
                    ans++;
                }
            }
        }
        
        cout<< ans / 2 << endl;

    }
}


