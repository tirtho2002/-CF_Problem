#include <iostream>
#include <algorithm>
using namespace std;
#include <set>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string arr;
        cin >> arr;
        string arr2 = arr;

        sort(arr.begin(), arr.end());

        if (arr == arr2)
        {
            reverse(arr.begin(), arr.end());
        }
        if (arr == arr2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << arr << endl;
        }
    }
    return 0;
}
