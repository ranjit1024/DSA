# include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    int ans = 0;
    if(n == 0) ans++;
    else{

    
    while (n >= 10)
    {

         if(n % 10 == 0){
            ans++;
            n = n / 10;
        }
        else{
            n = n / 10;
        }

    }
}
    cout << ans;

} 