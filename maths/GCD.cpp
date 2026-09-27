# include <iostream>
using namespace std;

int GCD(int n1, int n2){
  
    while(n1 != 0 && n2 != 0){
        if(n1 > n2){
            n1 =  n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }
    }
    if(n2 == 0 ) {
        cout << n1 << endl;
    }
    else{
        cout << n2 << endl;
    }
  
}
int LCM(){
    int n1 = 
}