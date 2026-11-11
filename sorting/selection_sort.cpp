
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, 6, 1, 2, 3, 4};

    for (int i = 0; i < arr.size() - 1; i++) {

        int minIndex = i;

        // Find minimum element
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap after finding minimum
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}
