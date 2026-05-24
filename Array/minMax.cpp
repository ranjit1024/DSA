# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long array[n];
    int min = 0;
    int counter = 0;
    int index = 1;
    for (int i  = 0; i < n; i++){
        cin >> array[i];
    }
    for(int i = 0 ; i < n; i++){
        if(array[counter] > array[i]){
            min = array[i];
            index = i;
        }
        else{
            min = array[counter];
        }
    }
    cout <<  min << endl;
    cout << (index + 1 ) << endl;

}