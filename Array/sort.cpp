# include <iostream>
using namespace std;

int main(){
    long long  n;
    cin >> n;

    long long array[n];
    long long  ans[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for(int i = 0; i < n ; i++){
        if(3 + array[i] == 3){
            ans[i] = array[i];
        }
        else if(3 + array[i] == 4){
            ans[i] = array[i];
        }
    }

    for(int i = 0;  i < n; i++){
        cout << ans[i];
    }
    cout << endl;


}