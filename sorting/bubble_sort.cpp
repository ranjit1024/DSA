#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int pass = 1;

    for (int i = 0; i < N - 1; i++) {
        int swaps = 0;

        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swaps++;
            }
        }

        cout << "Pass " << pass << ": ";

        for (int k = 0; k < N; k++) {
            cout << a[k];
            if (k + 1 < N) cout << ' ';
        }

        cout << " , swaps = " << swaps << "\n";

        pass++;

        if (swaps == 0) break;
    }

    return 0;
}