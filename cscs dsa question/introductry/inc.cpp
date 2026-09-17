#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, ans = 0;
    cin >> n >> a;

    for (int i = 1; i < n; i++) {
        cin >> b;
        if (b < a) ans += a - b;
        else a = b;
    }

    cout << ans << "\n";
    return 0;
}
