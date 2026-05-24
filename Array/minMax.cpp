# include <iostream>
using namespace std;

int main(){
    long long  n;
    cin >> n;
    long long array[n];
    
  
    for(int i = 0 ; i < n; i++){
        cin >> array[i];
    }
    long long mn = array[0];
    int index = 0;

    for(int i = 0 ; i < n; i++){
        if(array[i] < mn){
            mn = array[i];
            index  = i;
        }
    };

    cout << mn << " " << index + 1;
}