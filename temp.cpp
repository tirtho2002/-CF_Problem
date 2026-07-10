#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pro, math, sport;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x == 1)
            pro.push_back(i);
        else if (x == 2)
            math.push_back(i);
        else
            sport.push_back(i);
    }

    int teams = min({pro.size(), math.size(), sport.size()});

    cout << teams << endl;

    for (int i = 0; i < teams; i++) {
        cout << pro[i] << " " << math[i] << " " << sport[i] << endl;
    }

    return 0;
}