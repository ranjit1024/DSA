# include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    bool sorted = false;
    long long array[n];
    for(int i = 0; i < n;i ++){
        cin >> array[i];
    }
    for(int i = 0; i < n-1 ; i++){
        if(array[i+1] - array[i] == 1){
            sorted = true;
        }
    }
    sorted ? cout << "YES" : cout << "NO";
}