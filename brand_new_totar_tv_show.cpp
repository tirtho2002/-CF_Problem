#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007LL;
const int MAXA = 500000;

int spf[MAXA + 1];

void build_spf() {
    for (int i = 0; i <= MAXA; i++) spf[i] = i;

    for (int i = 2; i * i <= MAXA; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXA; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    build_spf();

    int T;
    cin >> T;

    while (T--) {
        int n, x;
        cin >> n >> x; // x = 1 in F1

        unordered_map<int, long long> sumExp;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            while (a > 1) {
                int p = spf[a];
                int cnt = 0;

                while (a % p == 0) {
                    a /= p;
                    cnt++;
                }

                sumExp[p] += cnt;
            }
        }

        long long ans = 1;

        for (auto &it : sumExp) {
            ans = (ans * (it.second + 1)) % MOD;
        }

        cout << ans % MOD << '\n';
    }

    return 0;
}