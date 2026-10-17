#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcde";
    string target = "hkjlj";

    string ds = s + s;

    cout << ds << endl;

    size_t pos = ds.find(target);

    if (pos != string::npos) {
        cout << "Found at index: " << pos << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}