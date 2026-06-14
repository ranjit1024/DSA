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
    for(int i = 0 ; i < n; i++){
        cin >> Arr[i];
    }

    for(int i = 0; i < n; i++){
        int mn = Arr[i];
        int loc = i;
        for(int j = i; j < n; j++){
            if(Arr[j] < mn){
                mn = Arr[j];
                loc = j;
            }
        }
        swap(Arr[i], Arr[loc]);
    }
    for(int i =0; i < n; i++){
        cout << Arr[i];
    }
}