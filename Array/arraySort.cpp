# include <iostream>
using namespace std;

int main(){
    long long n;
    cin >>  n;
    long long array[n];

    for (int i = 0 ; i < n; i++){
        cin >> array[i];   
    }
    bool sorted = true;

    for(int i = 0; i< n - 1; i++){
        if(array[i] > array[i+1] ){
            sorted = false;
            break;
        }
    }

    sorted ? cout << "YES" : cout << "NO";

}