#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long array[n];

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

        for (int i = 0; i < n; i++) {
            bool unique = true;

            for (int j = 0; j < n; j++) {
                if (i != j && array[i] == array[j]) {
                    unique = false;
                    break;
                }
            }

            if (unique) {
                cout << array[i] << endl;
                break; 
            }
        }
        
    }
}