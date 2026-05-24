#include <iostream>

using namespace std;

int main()
{
    bool found;

    long long n;
    cin >> n;

    long long x;
    cin >> x;

    long long array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (x == array[i])
        {
            found = true;

            break;
        }
        else
        {
            found = false;
        }
    }
    found ? cout << "YES" : cout << "NO";
}