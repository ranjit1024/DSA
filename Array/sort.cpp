#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        int arr[n];
        int ans[n];

        int zero = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];

            if(arr[i] == 0) {
                zero++;
            }
        }

        for(int i = 0; i < zero; i++) {
            ans[i] = 0;
        }

        for(int i = zero; i < n; i++) {
            ans[i] = 1;
        }

        for(int i = 0; i < n; i++) {

            if(i != n - 1)
                cout << ans[i] << " ";
            else
                cout << ans[i];
        }

        cout << endl;
    }

    return 0;
}