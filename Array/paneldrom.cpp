#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char input[n];
    char output[n];

    int index = 0;
    bool isPalindrom = false;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {

        output[index] = input[i];
        index++;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if ( input[i] == output[i])
        {
            isPalindrom = true;
        }
        else{
            isPalindrom = false;
        }
    }

    isPalindrom ? cout << "YES" : cout << "NO" << endl;
}