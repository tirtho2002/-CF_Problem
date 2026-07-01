#include <iostream>
using namespace std;

int main()
{
    int arr[8];

    for (int i = 0; i < 8; i++)
        cin >> arr[i];

    bool flag = true;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] < 100 || arr[i] > 675 || arr[i] % 25 != 0)
            flag = false;

        if (i > 0 && arr[i] < arr[i - 1])
            flag = false;
    }

    if (flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}