# include <iostream>
using namespace std;
int GCD(int n1, int n2){
    while(n1 != 0 && n1 != 0){
        if(n1 > n2){
            n2 = n1 % n2;

        }
        else{
            n1 = n2 % n1;
        }

    }
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}
int  main(){
    int n1 = 3;
    int n2 = 5;
    int max_digit = max(n1, n2);

}