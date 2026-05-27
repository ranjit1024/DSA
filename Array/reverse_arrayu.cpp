# include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int array[n];
    int ans[n];
    int inc = 0; 
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }



    for(int i = n-1; i >= 0; i--){
        
        ans[inc] = array[i];
        inc++;
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }


}