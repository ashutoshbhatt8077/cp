#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long rounds = 0;

        while (a != b && b != c && a != c) {
            vector<long long> v = {a, b, c};

            sort(v.begin(), v.end());

            v[0]++;
            v[2]--;

            a = v[0];
            b = v[1];
            c = v[2];

            rounds++;
        }

        cout << rounds << '\n';
    }

    return 0;
}