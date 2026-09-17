#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    long long count = 0;
    for (int i = 1; i <= n; i++) {
        
        for (int v = 1; v  < sqrt(2*n); v++) {
            int j = (a[i] * v) + i;
            
            if (j > i && j <= n && a[j] == v) {
                count++;
            }

        }
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}