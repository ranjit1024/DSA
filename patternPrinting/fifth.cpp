#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

       
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

       
        for(int j = 1; j <= i; j++) {
            if(j == 1 or j == i){
                cout << "*";
            }
            else{

                cout << "*";
            }
            if(j < i) cout << " ";  // only between stars
        }

        cout << endl;
    }
}