#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        int cnt = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                cnt++;
            }
        }

        int mx = 0;

        for (int i = 1; i < n - 1; i++) {
            int cur = 0;

            if (s[i - 1] != s[i]) {
                cur++;
            }

            if (s[i] != s[i + 1]) {
                cur++;
            }

            if (s[i - 1] != s[i + 1]) {
                cur--;
            }

            mx = max(mx, cur);
        }

        cout << cnt - mx << '\n';
    }

    return 0;
}