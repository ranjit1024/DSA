#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag =  false;
    string Arr[n];

    for (int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    string x;
    cin >> x;

    int l = 0;
    int r = n - 1;

    while (l <= r) {
        int mid = (r + l) / 2;

        if (Arr[mid] == x) {
            flag = true;
            break;
        }
        else if (Arr[mid] < x) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    
    flag ? cout << "YES" : cout << "NO";
    
}