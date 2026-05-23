# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    int min = 0;
    int counter = 0;
    for (int i  = 0; i < n; i++){
        cin >> array[i];
    }
    for(int i = 0 ; i < n; i++){
        if(array[counter] > array[i]){
            min = array[i];
            
        }
        else{
            min = array[counter];
        }
    }
    cout << endl;
    cout <<  min << endl;

}