# include <iostream>

using namespace std;

int main(){
    int a = 12;
    int b = 45;
    int temp = a;
    a  = b;
    b = temp;
    cout << a << endl;
    cout << b << endl;
}