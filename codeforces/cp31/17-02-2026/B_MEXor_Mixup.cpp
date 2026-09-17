#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll computeXor(ll n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        ll xo = computeXor(a - 1);

        if ((b ^ xo) == a)
            cout << a + 2 << "\n";
        else if (xo == b)
            cout << a << "\n";
        else
            cout << a + 1 << "\n";
    }

    return 0;
}
