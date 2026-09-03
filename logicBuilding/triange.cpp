# include <iostream>
using namespace std;

int main(){
    int n = 4;
    char letter = 'A' + (n-1);
    for(int i = 0; i < n; i++){
        for(char ch = letter - i ; ch <= letter; ch++){
            cout << ch;
        }
        cout << endl;
    }


}
