#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int k;
        cin >> k;

        int i = 1, count = 0;



        while (true) {

            if (i % 3 != 0 && i % 10 != 3) {
                count++;
            }

            if (count == k) {
                cout << i << endl;
                break;
            }

            i++;
        }
    }

    return 0;
}


