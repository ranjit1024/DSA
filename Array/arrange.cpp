# include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    while(x --){

    
    int n;
    cin >> n;

    long long array[n];
    long long asn[n];

    int odd = 0;
    for(int i = 0 ; i < n ; i++){
        array[i] = i + 1;
    }
    for(int i = 0 ; i < n; i++){
        if(array[i] % 2 != 0){
            asn[odd] = array[i];
            odd++;
        } 
    }
    for(int i = n - 1; i >=0 ; i--){
        if(array[i] % 2 == 0){
            asn[odd] = array[i];
            odd++;
        }
        
    }

    for(int i = 0; i < n ; i++){
        i < n-1 ? cout << asn[i] << " " :  cout << asn[i];
    } 
    cout << endl;
}
}