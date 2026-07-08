#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        vector<int> p1(n + 1), p2(n + 1), p3(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            p1[i] = p1[i - 1];
            p2[i] = p2[i - 1];
            p3[i] = p3[i - 1];

            if (a[i] == 1) p1[i]++;
            else if (a[i] == 2) p2[i]++;
            else p3[i]++;
        }

        bool ok = false;

        for (int cut1 = 1; cut1 <= n - 2 && !ok; cut1++) {

            int L1 = p1[cut1];
            int L2 = p2[cut1];
            int L3 = p3[cut1];

            if (L1 < L2 + L3) continue;

            for (int cut2 = cut1 + 1; cut2 <= n - 1; cut2++) {

                int M1 = p1[cut2] - p1[cut1];
                int M2 = p2[cut2] - p2[cut1];
                int M3 = p3[cut2] - p3[cut1];

                if (M1 + M2 >= M3) {
                    ok = true;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}