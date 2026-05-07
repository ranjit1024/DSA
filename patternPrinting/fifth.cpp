#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
  
    for(int i = 1; i <=n ; i++){
        for(int j = 1 ; j <= n - i ; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            if(j == i  or j == 1 or i == n or i == 1){
                cout << "* ";
            }
            else{
              

                    cout << "  ";
                
            }
        }
        cout << endl;
    }
}