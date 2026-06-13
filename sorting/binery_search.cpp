// Array[mid] <  x move right
// Array[mid] > x move left

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;


    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    int x;
    cin >> x;

        int l = 0;
    int r = n - 1;
    while(l <= r ){
        int mid = (r + l) / 2;
        if(Arr[mid] == x){
            cout << "Found at index " << mid;
            break;
        }
        else if(Arr[mid] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }

    }
    cout << "Not found";
}