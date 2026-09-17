#include <bits/stdc++.h>
using namespace std;

#define f(i, s, e) for (long long i = s; i < e; i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define ub(hei, num) upper_bound(hei.begin(), hei.end(), num) - hei.begin()
#define lb(hei, num) lower_bound(hei.begin(), hei.end(), num) - hei.begin()

void solve()
{
    ll n;
    cin >> n;
    vector<ll> temp(n,0);
    for (auto &it : temp)
        cin >> it;
    if (n == 2)
    {
        cout << max(temp[0], temp[1]) << " " << min(temp[0], temp[1]) << endl;
        return;
    }
    sort(temp.begin(), temp.end());
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
            {
                if (temp[i] == (temp[k] % temp[j]))
                {
                    cout << temp[k] << " " << temp[j] << endl;
                    return;
                }
            }
    cout << -1 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        solve();
    }

    return 0;
}