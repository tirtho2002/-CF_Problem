#include <iostream>
using namespace std;

int main() {

    string arr;
    cin >> arr;

    string ans = arr;
    ans[ans.size() - 1] = '4';

    cout << ans;

    return 0;
}