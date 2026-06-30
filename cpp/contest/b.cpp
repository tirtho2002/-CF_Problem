#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a;
        cin >> a;

        long long original = a;
        long long temp = a;

        while (a > 0)
        {
            a /= 10;
            temp *= 10;
        }

        temp += original;

        cout << temp/original << "\n";
    }

    return 0;
}