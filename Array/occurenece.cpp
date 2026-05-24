# include <iostream>

using namespace std;


int main(){
    int counter = 0;
    int n; 
    cin >> n;

    int match;
    cin >> match;

    long long array[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for(int i = 0; i < n; i++){
        if(match == array[i]){
            counter++;
        }
    }
    cout << counter;
}