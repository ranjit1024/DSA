# include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int duplicate = 0;
        long long array[n];
        for(int i = 0 ; i < n; i++){
            cin >> array[i];
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n; j++){
                if(array[i] == array[j] and i != j){
                    
                    duplicate = array[i];        
                    break;
                }
            }
        }
        cout << duplicate << endl;
    }
}