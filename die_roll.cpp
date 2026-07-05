#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int mx = max(a, b);

    int neu = 7 - mx;
    int deno = 6;

    int divi = gcd(neu, deno);

    cout << neu / divi << "/" << deno / divi;

    return 0;
}