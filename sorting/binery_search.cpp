#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = 0;
    int r = n;
    int mid = (l + r) / 2;
    bool flag = false;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    int x;
    cin >> x;

    while(Arr[mid] != x){
        if(Arr[x] < Arr[mid]){
            r = mid - 1;
            mid = (l + r) / 2;
        }
        else{
            l = mid + 1;
              mid = (l + r) / 2;
        }
    }
}