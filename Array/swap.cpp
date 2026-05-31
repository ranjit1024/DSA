#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
    long long n;
    cin >> n;

    long long array[n];
    long long ans[n];
    int inc = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i  = i + 2)
    {
        if(i + 1 < n){
            ans[inc] = array[i+1];
            inc++;
            ans[inc] = array[i];
            inc ++;
        }
        else{
            ans[inc++] = array[i];
        }
        
    }

    for(int i= 0; i < n; i++){
        if(i == n-1){
            cout << ans[i];
        }
        else{
            cout << ans[i] <<" ";
        }
    }
    cout << endl;
}
}