

#include <iostream>

using namespace std;

int main()
{
    long long  n;
    cin >> n;
    bool flag = false;
    long long Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    long long x;
    cin >> x;

    long long l = 0;
    long long r = n - 1;
    while(l <= r ){
        int mid = (r + l) / 2;
        if(Arr[mid] == x){
            flag = true;
            break;
        }
        else if(Arr[mid] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }

    }
    flag ? cout << "YES" : cout << "NO";
}
