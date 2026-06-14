#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {

        int arr[3], n;
        int mx = 0, sum = 0;

        for(int i = 0; i < 3; i++) {
            cin >> arr[i];

            if(arr[i] > mx) {
                mx = arr[i];
            }
        }

        cin >> n;

        for(int a : arr) {
            sum += (mx - a);
        }

        if(n >= sum && (n - sum) % 3 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}