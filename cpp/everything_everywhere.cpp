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
        int arr[n];
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i >= 1 && (arr[i - 1] > arr[i]))
            {
                flag = false;
            }
        }

        if (flag)
        {
            cout << (n - 1) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}