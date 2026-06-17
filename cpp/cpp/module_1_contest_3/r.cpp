#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,x,d;
        cin >> n>>x>>d;

        cout << (n/(x*5))+d << endl; 
    }

    return 0;
}