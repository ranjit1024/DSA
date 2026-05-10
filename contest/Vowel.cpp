# include <iostream>
using namespace std;

int main(){
    char n;
    cin >> n;
    if(n == 'a' or n == 'e' or n == 'i' or n == 'o' or n=='u'){
        cout << "YES" << endl;
    }
    else{
        cout << "NO";
    }
}