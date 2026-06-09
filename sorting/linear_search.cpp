#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    int x;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (x == Arr[i])
        {
            flag = true;
        }
    }
}
