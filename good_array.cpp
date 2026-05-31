#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x;
        bool allOne = true;

        for (int i = 0; i < n; i++) {
            cin >> x;

            if (x != 1)
                allOne = false;
        }

        if (n == 1 || allOne)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}