# include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cin >> n;

    int Arr[n];
    for(int i = 0; i < n; i++){
        cin >> Arr[i];
    }

    for(int i = 0 ;  i < n - 1; i++){
        for(int j = 0 ; j < n; j++){
            if(Arr[j] > Arr[j+1]){
                swap(Arr[j], Arr[j+1]);
            }
        }
    }

    for(int i=  0; i < n; i++){
        cout << Arr[i];
    }
}