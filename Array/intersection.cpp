#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       
        int n;
        cin >> n;

        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        };
        int m;
        cin >> m;
        int array2[m];

        for (int i = 0; i < m; i++)
        {
            cin >> array2[i];
        };

        for (int i = 0; i < n; i++)
        {
            if (array[i] == array2[i])
            {
                cout << array2[i];
            }
        }
        cout << endl;
    }
}