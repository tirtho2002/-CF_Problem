#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = (ll)4e18;

void dfs(ll v, ll cost, ll x, unordered_map<ll, ll>& mp) {
    auto it = mp.find(v);
    if (it != mp.end() && it->second <= cost) return;

    mp[v] = cost;

    if (v == 0) return;

    // Divide immediately
    dfs(v / x, cost + 1, x, mp);

    // Increase to the next multiple of x, then divide
    ll rem = v % x;
    ll add = (x - rem) % x;

    if (add > 0) {
        dfs((v + add) / x, cost + add + 1, x, mp);
    }
}

void solve() {
    ll a, b, x;
    cin >> a >> b >> x;

    unordered_map<ll, ll> A, B;

    dfs(a, 0, x, A);
    dfs(b, 0, x, B);

    ll ans = INF;

    for (auto &[va, ca] : A) {
        for (auto &[vb, cb] : B) {
            ans = min(ans, ca + cb + llabs(va - vb));
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}