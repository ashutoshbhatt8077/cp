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
ll solve(vector<vector<bool>> &c, vector<vector<ll>> &dp, ll i, ll j, ll mo)
{
    if (i >= dp.size() - 1)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    ll up = 0, down = 0, st = 0;
    if (j + 1 < dp[0].size() && c[i + 1][j + 1]) // up
    {
        up = solve(c, dp, i + 1, j + 1, mo);
    }
    if (j < dp[0].size() && c[i + 1][j]) // st
    {
        st = solve(c, dp, i + 1, j, mo);
    }
    if (j - 1 >= 0 && c[i + 1][j - 1]) // down
    {
        down = solve(c, dp, i + 1, j - 1, mo);
    }
    return dp[i][j] = (up + down + st) % mo;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll mo = 1000000007;
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        vector<vector<bool>> cango(n, vector<bool>(m, false));
        vector<vector<ll>> dp(n, vector<ll>(m, -1));
        if (n == 1)
        {
            if (temp[0] == 0)
                cout << m << endl;
            else
                cout << 1 << endl;
            return 0;
        }
        for (ll i = 0; i < n; i++)
        {
            if (temp[i] == 0)
            {
                for (int j = 0; j < m; j++)
                {
                    cango[i][j] = true;
                }
            }
            else
            {
                cango[i][temp[i] - 1] = true;
            }
        }
        for (int i = 0; i < m; i++)
            if (cango[0][i])
            {
                // cout << 1 << endl;
                solve(cango, dp, 0, i, mo);
            }
        ll ans = 0;
        for (int i = 0; i < m; i++)
            if (cango[0][i])
            {
                // cout << 1 << endl;
                ans = (dp[0][i] + ans) % mo;
            }
        cout << ans << endl;
    }

    return 0;
}