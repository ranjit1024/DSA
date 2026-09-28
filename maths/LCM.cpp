# include <iostream>
using namespace std;
int GCD(int n1, int n2){
    while(n1 != 0 && n2 != 0){
        if(n1 > n2){
            n1 = n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }
    }
    if(n1 == 0){
        return n2;
    }
    else{
        return n1;
    }
}
int  main(){
    int n1 = 12;
    int n2 = 18;
    int gcd = GCD(n1,n2);
    int LCM = (n1 * n2) / gcd;
    cout << LCM;
}