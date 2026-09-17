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

int mod = 1e9 + 7;
void solve(vector<vector<int>> &dp, vector<vector<char>> temp, int i, int j)
{
    if (i - 1 >= 0 && temp[i - 1][j] != '*')
        solve(dp, temp, i - 1, j);
    if (j - 1 >= 0 && temp[i][j - 1] != '*')
        solve(dp, temp, i, j - 1);
    dp[i][j] = (dp[i + 1][j] + dp[i][j + 1]) % mod;
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
        vector<vector<char>> temp(n, vector<char>(n));
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> temp[i][j];
        for (int i = n - 1; i >= 0; i--)
            if (temp[i][n - 1] == '*')
            {
                break;
            }
            else
            {
                dp[i][n - 1] = 1;
            }
        for (int i = n - 1; i >= 0; i--)
            if (temp[n - 1][i] == '*')
            {
                break;
            }
            else
            {
                dp[n - 1][i] = 1;
            }
        if (temp[0][0] == '*' || temp[n - 1][n - 1] == '*')
            cout << 0 << endl;
        else if (n == 1)
            cout << 1 << endl;
        else
            solve(dp, temp, n - 2, n - 2);
        cout << dp[0][0] << endl;
    }

    return 0;
}