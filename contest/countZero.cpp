# include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    int ans = 0;
    while (n > 10)
    {

        if(n % 10 == 0){
            ans++;
            n = n / 10;
        }
        else{
            n = n / 10;
        }

    }
    
    cout << ans;

} 