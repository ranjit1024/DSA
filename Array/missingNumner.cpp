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
        }

        for(int i = 0 ; i < n; i++){
            for(int j  = 0 ; i < n; j++){
                cout << array[i];
            }
        }
        
        cout << endl;
    }
}