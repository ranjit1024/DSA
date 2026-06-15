# include <iostream>
using namespace std;
void swap(long long &a, long long &b){
    long long temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cin >> n;

    long long  Arr[n];
    for(int i = 0 ; i < n; i++){
        cin >> Arr[i];
    }

    for(int i = 0 ; i < n - 1; i++){
        long long min = Arr[i];
        int loc = i;
        for(int j = i; j < n; j++){
            if(Arr[j] < min){
                min = Arr[j]; 
                loc = j;
            }
        }
        swap(Arr[i], Arr[loc]);
        cout << "Pass " << i + 1 << ": ";
        for(int k  = 0; k < n; k++){
            cout << Arr[k] << " ";
        }
        cout << ", " << "min_selected = " << min; 
        cout  << endl;
    }


}