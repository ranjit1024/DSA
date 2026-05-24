#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    long long mx = array[0];
    int index = 0;
    
    for(int i  = 0 ; i < n ; i++){
        if(array[i] > mx){
            mx = array[i];
            index = i;
        }
    }
    cout << mx << " " << index+1;
}