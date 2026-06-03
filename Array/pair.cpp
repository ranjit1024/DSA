# include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;

        cin >> n;
        int array[n];

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        cout << "Enter Number you want to find pair of: ";
        int pair;

        int ans;
        cin >> pair;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n ;j++){
                if(array[i] + array[j] == pair){
                    cout << array[i] << "+" << array[j] << "==" << pair <<  endl;
                    ans++;
                }
            }
        }
        cout<< ans;

    }
}