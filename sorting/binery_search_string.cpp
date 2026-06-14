#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string Arr[n];

    for (int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    string x;
    cin >> x;

    int l = 0;
    int r = n - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (Arr[mid] == x) {
            cout << "Found at index " << mid << endl;
            return 0;
        }
        else if (Arr[mid] < x) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    
}